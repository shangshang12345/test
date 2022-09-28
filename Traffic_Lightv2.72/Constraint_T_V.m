function [tmin,tmax,suggest] = Constraint_T_V(lighttype,vehicle_num,lighttime,roadinf)
Vmax=roadinf.vmax/3.6;
Vmin=roadinf.vmin/3.6;
redtime=roadinf.redtime;
greentime=roadinf.greentime;
yellowtime=roadinf.yellowtime;
velocity=roadinf.velocity;
s=roadinf.s;
t_loss=1.5;
if lighttype=="green"
    if s/Vmax<lighttime
        tmin=s/Vmax;
        tmax=lighttime;
        suggest=1;    %当前相位通过交叉路口    
    elseif redtime+yellowtime+lighttime>=s/Vmin
        tmin=0;
        tmax=0;
        suggest=4;      %停车等待
    elseif redtime+yellowtime+lighttime<s/Vmin
        tmin=redtime+yellowtime+lighttime;
        tmax=s/Vmin;
        suggest=2;     %考虑在下一个相位通过交叉路口
    end
else
    if lighttype=="yellow"
        lighttime=lighttime+redtime;
    end
    if s/Vmin<=lighttime+vehicle_num/velocity+t_loss
        tmin=0;
        tmax=0;
        suggest=4;      %停车等待
    else
        tmin=lighttime+vehicle_num/velocity+t_loss;
        tmax=s/Vmin;
        suggest=3;     %等待红灯过去，的下一个绿灯范围内通过
    end
end

end


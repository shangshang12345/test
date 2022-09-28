
%%
t_with_V2V = AccPedlCopy(1,:);
t_without_V2V = AccPedl(1,:);

AccPedl_with_V2V =AccPedlCopy(2,:);
AccPedl_without_V2V = AccPedl(2,:);

BrkPedl_with_V2V = BrkPedlCopy(2,:);
BrkPedl_without_V2V = BrkPedl(2,:);

Engine_Consumption_with_V2V = Engine_ConsumptionCopy(2,:);
Engine_Consumption_without_V2V = Engine_Consumption(2,:);

Engine_Consumption_Rate_with_V2V = Engine_Consumption_RateCopy(2,:);
Engine_Consumption_Rate_without_V2V = Engine_Consumption_Rate(2,:);

Engine_Speed_with_V2V = Engine_SpeedCopy(2,:);
Engine_Speed_without_V2V = Engine_Speed(2,:);

Shaft1_Gear_with_V2V = Shaft1_GearCopy(2,:);
Shaft1_Gear_without_V2V = Shaft1_Gear(2,:);

Shaft2_Gear_with_V2V = Shaft2_GearCopy(2,:);
Shaft2_Gear_without_V2V = Shaft2_Gear(2,:);

V_act_with_V2V = V_actCopy(2,:);
V_act_without_V2V = V_act(2,:);

V_target_with_V2V = V_targetCopy(2,:);
V_target_without_V2V = V_target(2,:);

%%
figure(1)
plot(t_with_V2V,Engine_Consumption_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,Engine_Consumption_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£�ȼ���������ͼ");
ylabel({'ȼ����������kg��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(2)
plot(t_with_V2V,Engine_Consumption_Rate_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,Engine_Consumption_Rate_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£�ȼ�����������ͼ");
ylabel({'ȼ�������ʣ�g/s��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(3)
plot(t_with_V2V,Shaft1_Gear_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,Shaft1_Gear_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£������ᵲλ���");
ylabel({'�����ᵲλ��kg��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(4)
plot(t_with_V2V,Shaft2_Gear_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,Shaft2_Gear_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£�ż���ᵲλ���");
ylabel({'ż���ᵲλ��kg��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(5)
plot(t_with_V2V,V_act_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,V_act_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£��������ͼ");
ylabel({'���٣�km/h��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(6)
plot(t_with_V2V,AccPedl_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,AccPedl_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£��������ͼ");
ylabel({'���ſ��ȣ�%��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%
figure(7)
plot(t_with_V2V,BrkPedl_with_V2V,'b','LineWidth',2);
hold on;
plot(t_without_V2V,BrkPedl_without_V2V,'r','LineWidth',2,'LineStyle','--');
title("������ǰԤ֪�źŵ���Ϣ�£��ƶ����ͼ");
ylabel({'�ƶ�̤�忪�ȣ�%��'});
xlabel({'ʱ��t (s)'});
legend('Ԥ֪�źŵ�','δԤ֪�źŵ�');
%%
for i = 1:length(t_with_V2V)
    
end
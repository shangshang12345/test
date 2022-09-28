function Light_State = Light_Distinguish(Image,Dis)

warning off;

%%
Light_State=0;

Gray=rgb2gray(Image);

R=Image(:,:,1); G=Image(:,:,2); B=Image(:,:,3);
% figure(1),
% subplot(2,2,1),imshow(Image),title('image')
% subplot(2,2,2),imshow(R),title('r')
% subplot(2,2,3),imshow(G),title('g')
% subplot(2,2,4),imshow(B),title('b')

diff_R=60; diff_G=30; diff_B=10;  % 设置红、绿、蓝三种颜色提取阈值（越大越严格）
s=75:-0.7:75-84*0.7;
yy=[765 762 760 759 758 756 755 753 751 750 748 746 744 743 742 740 738 737 734 732 731 729 ...
     727 725 722 720 718 716 712 711 707 705 702 700 695 694 690 687 682 680 678 671 670 666 ...
     663 656 653 650 646 640 636 631 627 621 616 608 602 597 592 587 577 570 562 551 544 536 528 ...
     516 505 495 483 473 459 443 429 413 395 379 358 336 312 289 262 242 202];
p=polyfit(s,yy,5);
start=ceil(polyval(p,Dis));
start=max(start-50,1);     %搜索窗上限
%%
% 红色提取

Image_R=Image;

RP_R=Image(:,:,1); RP_G=Image(:,:,2); RP_B=Image(:,:,3);

% figure(2),
% subplot(2,2,1),imshow(Image),title('image')
% subplot(2,2,2),imshow(RP_R),title('RP_Rr')
% subplot(2,2,3),imshow(RP_G),title('RP_Gg')
% subplot(2,2,4),imshow(RP_B),title('RP_Bb')

XYR=~((R-G)>diff_R&(R-B)>diff_R);  % 提取红色条件是R分量与G、B分量差值大于设定

Mask=Gray(XYR);  % 灰照片掩膜

RP_R(XYR)=Mask; RP_G(XYR)=Mask; RP_B(XYR)=Mask;  % 使得非红色区域变为灰色

Image_R(:,:,1)=RP_R; Image_R(:,:,2)=RP_G; Image_R(:,:,3)=RP_B;

SearchRangeR=XYR(start:start+100,700:1240);   %确定搜索范围

if length(find((SearchRangeR)==0))>=50
    Light_State=1;
end

%%
% 绿色提取
Image_G=Image;

GP_R=Image(:,:,1); GP_G=Image(:,:,2); GP_B=Image(:,:,3);

XYG=~((G-R)>diff_G&(G-B)>diff_G);  % 提取绿色条件是G分量与R、B分量差值大于设定

% Mask=Gray(XYG);  % 灰照片掩膜
Mask=0;

GP_R(XYG)=Mask; GP_G(XYG)=Mask; GP_B(XYG)=Mask;  % 使得非绿色区域变为灰色

Image_G(:,:,1)=GP_R; Image_G(:,:,2)=GP_G; Image_G(:,:,3)=GP_B;


SearchRangeG=XYG(start:start+100,700:1240);   %确定搜索范围

if length(find((SearchRangeG)==0))>=50
    Light_State=2;
end

%%
% 蓝色提取

Image_B=Image;

BP_R=Image(:,:,1);BP_G=Image(:,:,2);BP_B=Image(:,:,3);

XYB=~((B-R)>diff_B&(B-G)>diff_B);  % 提取绿色条件是G分量与R、B分量差值大于设定

Mask_B=Gray(XYB);  % 灰照片掩膜

BP_R(XYB)=Mask_B; BP_G(XYB)=Mask_B; BP_B(XYB)=Mask_B;  % 使得非蓝色区域变为灰色

Image_B(:,:,1)=BP_R; Image_B(:,:,2)=BP_G; Image_B(:,:,3)=BP_B;

%%
% 显示结果
figure
subplot(2,2,1),imshow(Image); title('Image');

subplot(2,2,2),imshow(Image_R); title('Red Pass');

subplot(2,2,3),imshow(Image_G); title('Green Pass');

% subplot(2,2,4),imshow(Image_B); title('Blue Pass');

figure,
subplot(1,2,1),imshow(Image); title('Image');
subplot(1,2,2),imshow(Image_G); title('Green Pass');
% 显示原图与R/G/B三色提取结果对比图并显示标签
end


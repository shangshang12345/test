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

diff_R=60; diff_G=30; diff_B=10;  % ���ú졢�̡���������ɫ��ȡ��ֵ��Խ��Խ�ϸ�
s=75:-0.7:75-84*0.7;
yy=[765 762 760 759 758 756 755 753 751 750 748 746 744 743 742 740 738 737 734 732 731 729 ...
     727 725 722 720 718 716 712 711 707 705 702 700 695 694 690 687 682 680 678 671 670 666 ...
     663 656 653 650 646 640 636 631 627 621 616 608 602 597 592 587 577 570 562 551 544 536 528 ...
     516 505 495 483 473 459 443 429 413 395 379 358 336 312 289 262 242 202];
p=polyfit(s,yy,5);
start=ceil(polyval(p,Dis));
start=max(start-50,1);     %����������
%%
% ��ɫ��ȡ

Image_R=Image;

RP_R=Image(:,:,1); RP_G=Image(:,:,2); RP_B=Image(:,:,3);

% figure(2),
% subplot(2,2,1),imshow(Image),title('image')
% subplot(2,2,2),imshow(RP_R),title('RP_Rr')
% subplot(2,2,3),imshow(RP_G),title('RP_Gg')
% subplot(2,2,4),imshow(RP_B),title('RP_Bb')

XYR=~((R-G)>diff_R&(R-B)>diff_R);  % ��ȡ��ɫ������R������G��B������ֵ�����趨

Mask=Gray(XYR);  % ����Ƭ��Ĥ

RP_R(XYR)=Mask; RP_G(XYR)=Mask; RP_B(XYR)=Mask;  % ʹ�÷Ǻ�ɫ�����Ϊ��ɫ

Image_R(:,:,1)=RP_R; Image_R(:,:,2)=RP_G; Image_R(:,:,3)=RP_B;

SearchRangeR=XYR(start:start+100,700:1240);   %ȷ��������Χ

if length(find((SearchRangeR)==0))>=50
    Light_State=1;
end

%%
% ��ɫ��ȡ
Image_G=Image;

GP_R=Image(:,:,1); GP_G=Image(:,:,2); GP_B=Image(:,:,3);

XYG=~((G-R)>diff_G&(G-B)>diff_G);  % ��ȡ��ɫ������G������R��B������ֵ�����趨

% Mask=Gray(XYG);  % ����Ƭ��Ĥ
Mask=0;

GP_R(XYG)=Mask; GP_G(XYG)=Mask; GP_B(XYG)=Mask;  % ʹ�÷���ɫ�����Ϊ��ɫ

Image_G(:,:,1)=GP_R; Image_G(:,:,2)=GP_G; Image_G(:,:,3)=GP_B;


SearchRangeG=XYG(start:start+100,700:1240);   %ȷ��������Χ

if length(find((SearchRangeG)==0))>=50
    Light_State=2;
end

%%
% ��ɫ��ȡ

Image_B=Image;

BP_R=Image(:,:,1);BP_G=Image(:,:,2);BP_B=Image(:,:,3);

XYB=~((B-R)>diff_B&(B-G)>diff_B);  % ��ȡ��ɫ������G������R��B������ֵ�����趨

Mask_B=Gray(XYB);  % ����Ƭ��Ĥ

BP_R(XYB)=Mask_B; BP_G(XYB)=Mask_B; BP_B(XYB)=Mask_B;  % ʹ�÷���ɫ�����Ϊ��ɫ

Image_B(:,:,1)=BP_R; Image_B(:,:,2)=BP_G; Image_B(:,:,3)=BP_B;

%%
% ��ʾ���
figure
subplot(2,2,1),imshow(Image); title('Image');

subplot(2,2,2),imshow(Image_R); title('Red Pass');

subplot(2,2,3),imshow(Image_G); title('Green Pass');

% subplot(2,2,4),imshow(Image_B); title('Blue Pass');

figure,
subplot(1,2,1),imshow(Image); title('Image');
subplot(1,2,2),imshow(Image_G); title('Green Pass');
% ��ʾԭͼ��R/G/B��ɫ��ȡ����Ա�ͼ����ʾ��ǩ
end


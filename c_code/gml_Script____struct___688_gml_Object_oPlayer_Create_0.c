// gml_Script____struct___688_gml_Object_oPlayer_Create_0 @ 0x140c46550

undefined8 *
gml_Script____struct___688_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_d0 = "gml_Script_anon@55049@___struct___688@gml_Object_oPlayer_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb65;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  pplVar3 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb66;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000100000416;
  local_138 = 0x416;
  uStack_134 = 0x1000001;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e8);
  local_c8 = 0xb67;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
  local_c8 = 0xb69;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef298);
  local_158 = (longlong *)0x3ff0000000000000;
  uStack_14c = 0xd;
  local_138 = 0;
  uStack_134 = 0x3ff00000;
  uStack_130 = uStack_150;
  uStack_12c = 0xd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
  FUN_140e87930(uVar4,DAT_1419ef278,0x80000000,&local_f8);
  local_c8 = 0xb6a;
  uStack_14c = 0xd;
  local_158 = (longlong *)0x0;
  if (&local_158 != pplVar3) {
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = uStack_150;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar3);
    }
    FUN_140041b80(pplVar3,&local_138);
  }
  local_c8 = 0xb6c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_98,uVar7,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_a8,uVar7,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_138 = (undefined4)local_98;
  uStack_134 = local_98._4_4_;
  uStack_130 = uStack_90;
  uStack_12c = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_138 = (undefined4)local_a8;
  uStack_134 = local_a8._4_4_;
  uStack_130 = uStack_a0;
  uStack_12c = uStack_9c;
  local_58 = local_88;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_50 = local_78;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000000000000c7;
  local_138 = 199;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_138);
  local_48 = local_68;
  ppuVar8 = &local_58;
  uVar7 = CONCAT44(uVar2,DAT_141a1f460);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,3,uVar7,ppuVar8);
  if (puVar5 != &local_118) {
    local_138 = *(undefined4 *)puVar5;
    uStack_134 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  FUN_140e87930(uVar4,DAT_1419f7de8,0x80000000,&local_118);
  local_c8 = 0xb6d;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_128,uVar7,uVar9);
  FUN_140e87440(&local_128,DAT_141a55540,0x80000000,&local_c0,uVar7 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_138 = (undefined4)DAT_141dda548;
  uStack_134 = DAT_141dda548._4_4_;
  uStack_130 = DAT_141dda550;
  uStack_12c = DAT_141dda554;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  uVar4 = 0;
  local_58 = local_88;
  switch(local_11c) {
  case 6:
    uVar4 = local_128;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_128);
    uVar4 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar4,param_2,&local_148,1,&local_c0,&local_58);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


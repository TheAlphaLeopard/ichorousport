// gml_Script_anon_11286_DefineTrinkets_TRINKETSINIT @ 0x1405ec220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11286_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_d0 = "gml_Script_anon@10912@DefineTrinkets@TRINKETSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1a6;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_f8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1a8;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_158,uVar8,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar8 >> 0x20);
  local_128 = (undefined4)local_158;
  uStack_124 = local_158._4_4_;
  uStack_120 = uStack_150;
  uStack_11c = uStack_14c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_128);
  local_50 = local_a8;
  ppuVar9 = &local_50;
  uVar8 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') goto LAB_1405ec65f;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_158,uVar8,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar8 >> 0x20);
  local_128 = (undefined4)local_158;
  uStack_124 = local_158._4_4_;
  uStack_120 = uStack_150;
  uStack_11c = uStack_14c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_128);
  local_48 = local_98;
  local_128 = _DAT_141dd4a58;
  uStack_124 = uRam0000000141dd4a5c;
  uStack_120 = uRam0000000141dd4a60;
  uStack_11c = DAT_141dd4a64;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_128);
  ppuVar9 = &local_48;
  uVar8 = CONCAT44(uVar3,DAT_141a56cf0);
  local_40 = local_88;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_138,2,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') goto LAB_1405ec65f;
  local_c8 = 0x1a9;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (0 < param_4) {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar6,DAT_141a1f4e0,0x80000000,&local_158,uVar8,uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a1edd0,0x80000000,&local_108,uVar8,uVar10);
  FUN_140e87440(local_f8,DAT_141a1f540,0x80000000,&local_118,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_128 = (undefined4)local_118;
  uStack_124 = local_118._4_4_;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_128);
  local_38 = local_78;
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  local_128 = 0xee;
  uStack_124 = 0x1000000;
  uStack_120 = uStack_f0;
  uStack_11c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_128);
  local_30 = local_68;
  uVar4 = 0;
  switch(uStack_14c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1405ec602_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_158);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_158;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_158 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1405ec602_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_148,2,&local_108,&local_38);
LAB_1405ec65f:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


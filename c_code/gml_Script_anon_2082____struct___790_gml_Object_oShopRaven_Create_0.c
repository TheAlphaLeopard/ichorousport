// gml_Script_anon_2082____struct___790_gml_Object_oShopRaven_Create_0 @ 0x140d75760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2082____struct___790_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1859@___struct___789@gml_Object_oShopRaven_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x6c;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x6e;
  local_108 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_98 = local_b8;
  local_108 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_100 = DAT_1419df7b8;
  uStack_fc = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_108);
  local_90 = local_a8;
  ppuVar5 = &local_98;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_f8,2,ppuVar5);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_48 = 0x70;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  }
  local_48 = 0x73;
  uStack_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a818,0x80000000,&local_68,uVar6,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = 0;
  local_108 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(&local_68,&local_108,DAT_141955260,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 != 0) goto LAB_140d75bff;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x1000000000000ee;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_108,DAT_1419f5868,0x80000000,&local_e8,uVar6,in_stack_fffffffffffffef0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e87440(&local_e8,DAT_1419f5848,0x80000000,&local_78,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  local_108 = (longlong *)CONCAT44(uRam0000000141ddb66c,_DAT_141ddb668);
  uStack_100 = uRam0000000141ddb670;
  uStack_fc = DAT_141ddb674;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_98 = local_b8;
  switch(local_dc) {
  default:
switchD_140d75ac6_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_e8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140d75ac6_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_e8);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar5 = &local_98;
  puVar7 = &local_78;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_f8,1,puVar7,ppuVar5);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_48 = 0x75;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_88,(ulonglong)puVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar5 & 0xffffffffffffff00);
    local_108 = (longlong *)CONCAT44(uRam0000000141ddb6ec,_DAT_141ddb6e8);
    uStack_100 = uRam0000000141ddb6f0;
    uStack_fc = DAT_141ddb6f4;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_108);
    local_90 = local_a8;
    uVar4 = FUN_140069500(uVar4);
    FUN_140e63610(uVar4,param_2,&local_d8,1,&local_88,&local_90);
  }
LAB_140d75bff:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


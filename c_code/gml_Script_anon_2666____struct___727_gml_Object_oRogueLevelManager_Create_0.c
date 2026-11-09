// gml_Script_anon_2666____struct___727_gml_Object_oRogueLevelManager_Create_0 @ 0x140cbcde0

undefined1 **
gml_Script_anon_2666____struct___727_gml_Object_oRogueLevelManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined1 **param_3,int param_4,
          undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffee0;
  undefined1 *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Script_anon@2395@___struct___726@gml_Object_oRogueLevelManager_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x82;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = (undefined1 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
    FUN_140e87440(&DAT_1419df7b0,DAT_1419f59c8,0x80000000,&local_108,uVar6,in_stack_fffffffffffffee0
                 );
  }
  else {
    FUN_140e87440(*param_5,DAT_1419f59c8,0x80000000,&local_108,uVar6,in_stack_fffffffffffffee0);
    param_5 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_1419ffd78,0x80000000,&local_b8,uVar6,in_stack_fffffffffffffee0);
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419ffd08,0x80000000,&local_c8,uVar6,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if (puVar2 != &local_78) {
    local_e8 = *puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_e8);
  }
  local_38 = &local_78;
  local_e8 = local_c8;
  uStack_e0 = uStack_c0;
  uStack_dc = uStack_bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  local_30 = local_68;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar7,DAT_141a573f0),&local_38);
  uStack_cc = 0;
  local_d8 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(uVar3,&local_d8,DAT_141955260,0);
  bVar4 = iVar1 == 0;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (bVar4) {
    local_9c = 0;
    local_a8 = 0x3ff0000000000000;
    puVar2 = &local_a8;
  }
  else {
    uStack_dc = 0;
    local_e8 = 0x3feccccccccccccd;
    puVar2 = &local_e8;
  }
  local_10c = local_fc;
  local_110 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_118 = local_108;
  }
  else {
    FUN_1400419b0(&local_118,&local_108);
  }
  FUN_1400460e0(&local_118,&local_b8);
  uStack_ec = local_10c;
  uStack_f0 = local_110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
    local_f8 = local_118;
  }
  else {
    FUN_1400419b0(&local_f8,&local_118);
  }
  FUN_140042560(&local_f8,puVar2);
  if (&local_f8 != param_3) {
    local_d8 = local_f8;
    uStack_d0 = uStack_f0;
    uStack_cc = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (bVar4) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  if ((!bVar4) && ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


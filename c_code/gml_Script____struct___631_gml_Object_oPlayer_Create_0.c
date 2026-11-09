// gml_Script____struct___631_gml_Object_oPlayer_Create_0 @ 0x140bf1c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___631_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_res8;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = "gml_Script_anon@6016@___struct___631@gml_Object_oPlayer_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x15b;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x15c;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86c30(uVar3,DAT_1419fe0e8,0x80000000,&local_b8);
  local_78 = 0x15d;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar3,DAT_1419fe158,0x80000000,&local_c8);
  local_78 = 0x15e;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar4 != &local_d8) {
    local_128 = *puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar3,DAT_1419f5ef8,0x80000000,&local_d8);
  local_78 = 0x160;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f7c18,0x80000000,&local_118,uVar6,in_stack_fffffffffffffed0);
  FUN_140e87440(&local_118,DAT_141a0a968,0x80000000,&local_70,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  local_128 = CONCAT44(uRam0000000141dc7474,_DAT_141dc7470);
  uStack_120 = uRam0000000141dc7478;
  uStack_11c = uRam0000000141dc747c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_128);
  local_res8 = local_60;
  uVar3 = 0;
  switch(local_10c) {
  case 6:
    uVar3 = local_118;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar3 = FUN_140e87250(uVar2);
  }
  ppuVar7 = &local_res8;
  puVar4 = &local_70;
  FUN_140e63610(uVar3,param_2,&local_108,1,puVar4,ppuVar7);
  local_78 = 0x161;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
  uVar6 = (ulonglong)puVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f7c18,0x80000000,&local_118,uVar6,uVar8);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_118,DAT_141a0a9f8,0x80000000,&local_e8,uVar6,uVar8);
  uStack_11c = local_dc;
  uStack_120 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_128 = local_e8;
  }
  else {
    FUN_1400419b0(&local_128,&local_e8);
  }
  uVar2 = uStack_11c;
  local_48 = (undefined4)local_128;
  uStack_44 = local_128._4_4_;
  uStack_40 = uStack_120;
  uStack_3c = uStack_11c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_48);
  if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e86c30(uVar3,DAT_141a0a728,0x80000000,&local_98);
  local_78 = 0x162;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f7c18,0x80000000,&local_118,uVar6,uVar8);
  FUN_140e87440(&local_118,DAT_141a0aa98,0x80000000,&local_f8,uVar6 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  uStack_11c = local_ec;
  uStack_120 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_128 = local_f8;
  }
  else {
    FUN_1400419b0(&local_128,&local_f8);
  }
  uVar2 = uStack_11c;
  local_48 = (undefined4)local_128;
  uStack_44 = local_128._4_4_;
  uStack_40 = uStack_120;
  uStack_3c = uStack_11c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_48);
  if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e86c30(uVar3,DAT_141a0cfc8,0x80000000,&local_a8);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


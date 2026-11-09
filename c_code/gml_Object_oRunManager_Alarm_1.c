// gml_Object_oRunManager_Alarm_1 @ 0x140d47e90

undefined8 *
gml_Object_oRunManager_Alarm_1
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  byte local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *local_40 [3];
  
  local_a0 = "gml_Script_anon@5220@gml_Object_oRunManager_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xda;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xdc;
  FUN_140e85f80(param_1,DAT_1419f6b08,0x80000000,&local_90);
  uStack_bc = 0xf;
  local_c8 = 0x100000300000020;
  iVar3 = FUN_140e851f0(&local_90,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar3 == 0) {
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_bc = 0xf;
    local_c8 = 0x10000000000002d;
    local_58 = 0x2d;
    uStack_54 = 0x1000000;
    uStack_50 = uStack_c0;
    uStack_4c = 0xf;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_58);
    local_40[0] = local_70;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar7,DAT_141a02ef8),local_40);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 == '\0') {
      local_98 = 0xdc;
      goto LAB_140d481ff;
    }
  }
  local_98 = 0xde;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fec58);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_98 = 0xe0;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a57b90);
    FUN_140e609c0(param_1);
    puVar6 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    FUN_1400460e0(uVar4,puVar5);
    FUN_140e60910(1);
    local_98 = 0xe1;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd9b8);
    FUN_140046040(uVar4);
    local_98 = 0xe3;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57ba0);
    FUN_140e63610(param_1,param_2,&local_d8,0,uVar4,0);
    local_98 = 0xe4;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar7 = (undefined4)*puVar6;
    }
    else {
      uVar7 = FUN_140e4b060(puVar6);
    }
    dVar1 = (double)FUN_140e79500(uVar7);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    uStack_bc = 0xf;
    local_c8 = 0x100000000000147;
    local_b8 = dVar1 * -5.0;
    FUN_140e87930(&local_c8,DAT_1419eedc8,1,&local_b8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
  }
  else {
    local_98 = 0xde;
  }
LAB_140d481ff:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


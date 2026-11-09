// gml_Script_anon_18181____struct___406_gml_Object_oBossThePest_Create_0 @ 0x1408255e0

undefined8 *
gml_Script_anon_18181____struct___406_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_res18;
  longlong *plVar6;
  longlong *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@15735@___struct___406@gml_Object_oBossThePest_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x385;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_80,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0;
  local_60 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x386;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar2 != &local_80) {
    local_108 = (longlong *)*puVar2;
    uStack_100 = *(undefined4 *)(puVar2 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_108);
  }
  local_res18 = &local_80;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_60,1,CONCAT44(uVar5,DAT_141a02ef8),&local_res18);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_88 = 0x386;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar4 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_f8,0,0);
    if (puVar4 != puVar2) {
      local_108 = (longlong *)*puVar4;
      uStack_100 = *(undefined4 *)(puVar4 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_108);
    }
    FUN_140e60910(1);
  }
  local_88 = 0x387;
  uStack_fc = 0xf;
  local_108 = (longlong *)0x100000100000366;
  local_48 = 0x366;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_100;
  uStack_3c = 0xf;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_a8);
  local_88 = 0x388;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_88 = 0x389;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_88 = 0x38b;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0xc010000000000000;
  FUN_140e87930(uVar3,DAT_1419f6278,0x80000000,&local_d8);
  local_88 = 0x38c;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar6 = param_1;
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_70,(ulonglong)plVar6 & 0xffffffffffffff00
                ,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_fc = local_dc;
  uStack_100 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_108 = local_e8;
  }
  else {
    FUN_1400419b0(&local_108,&local_e8);
  }
  FUN_1400462a0(&local_108,&local_70);
  if ((uStack_fc & 0xffffff) == 0) {
    uVar5 = SUB84(local_108,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_108);
  }
  uVar3 = FUN_140e79500(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar3;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
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
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


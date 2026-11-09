// gml_Script_anon_15660____struct___405_gml_Object_oBossThePest_Create_0 @ 0x140821870

undefined8 *
gml_Script_anon_15660____struct___405_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_res18;
  longlong *plVar6;
  longlong *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_b0 = "gml_Script_anon@13020@___struct___405@gml_Object_oBossThePest_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x2f3;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_64 = 0;
  local_70 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x2f4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar2 != &local_90) {
    local_128 = (longlong *)*puVar2;
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_128);
  }
  local_res18 = &local_90;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_70,1,CONCAT44(uVar5,DAT_141a02ef8),&local_res18);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_a8 = 0x2f4;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar4 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_118,0,0);
    if (puVar4 != puVar2) {
      local_128 = (longlong *)*puVar4;
      uStack_120 = *(undefined4 *)(puVar4 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_128);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x2f5;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000100000374;
  local_58 = 0x374;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_120;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_a0);
  local_a8 = 0x2f6;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_a8 = 0x2f7;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
  local_a8 = 0x2f9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar6 = param_1;
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_e8,param_1,param_2);
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_80,(ulonglong)plVar6 & 0xffffffffffffff00
                ,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = local_dc;
  uStack_120 = local_e0;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_128 = local_e8;
  }
  else {
    FUN_1400419b0(&local_128,&local_e8);
  }
  FUN_1400462a0(&local_128,&local_80);
  if ((uStack_11c & 0xffffff) == 0) {
    uVar5 = SUB84(local_128,0);
  }
  else {
    uVar5 = FUN_140e4b060(&local_128);
  }
  uVar3 = FUN_140e79500(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar3;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_a8 = 0x2fb;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0xc010000000000000;
  FUN_140e87930(uVar3,DAT_1419f6278,0x80000000,&local_f8);
  local_a8 = 0x2fc;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_108);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
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
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


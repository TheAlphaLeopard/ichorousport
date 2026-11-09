// gml_Script_anon_11455____struct___403_gml_Object_oBossThePest_Create_0 @ 0x14081cea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11455____struct___403_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *local_res18;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
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
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_90 = "gml_Script_anon@10365@___struct___403@gml_Object_oBossThePest_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x25e;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0;
  local_118 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x25f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar2 != &local_108) {
    local_128 = (longlong *)*puVar2;
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_res18 = &local_108;
  uVar6 = CONCAT44(uVar5,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar6,&local_res18);
  uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_88 = 0x25f;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    uVar5 = 0;
    puVar4 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_f8,0,0);
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
  local_88 = 0x261;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x100000100000357;
  local_58 = 0x357;
  uStack_54 = 0x1000001;
  uStack_50 = uStack_120;
  uStack_4c = 0xf;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_58);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_80);
  local_88 = 0x262;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  local_88 = 0x263;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0x4008000000000000;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_88 = 0x265;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  local_58 = _DAT_141dc6a30;
  uStack_54 = uRam0000000141dc6a34;
  uStack_50 = uRam0000000141dc6a38;
  uStack_4c = uRam0000000141dc6a3c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_58);
  local_res18 = &local_108;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar5,DAT_141a0a0d8),&local_res18);
  if (puVar2 != &local_c8) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_58);
  }
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_c8);
  local_88 = 0x266;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar7 = param_1;
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  uStack_11c = 6;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_70,(ulonglong)plVar7 & 0xffffffffffffff00
                ,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uStack_11c = local_cc;
  uStack_120 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_128 = local_d8;
  }
  else {
    FUN_1400419b0(&local_128,&local_d8);
  }
  FUN_1400462a0(&local_128,&local_70);
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
  local_88 = 0x267;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e87930(uVar3,DAT_141a0a748,0x80000000,&local_e8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
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
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


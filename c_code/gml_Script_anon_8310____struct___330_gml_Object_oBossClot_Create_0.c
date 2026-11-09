// gml_Script_anon_8310____struct___330_gml_Object_oBossClot_Create_0 @ 0x140703500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8310____struct___330_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_70 = "gml_Script_anon@8014@___struct___329@gml_Object_oBossClot_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x180;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x182;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar2 != &local_a8) {
    local_e8 = *puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  local_60 = &local_a8;
  local_e8 = CONCAT44(uRam0000000141dc6954,_DAT_141dc6950);
  uStack_e0 = uRam0000000141dc6958;
  uStack_dc = uRam0000000141dc695c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_e8);
  local_58 = local_98;
  local_e8 = CONCAT44(uRam00000001419e7d24,_DAT_1419e7d20);
  uStack_e0 = uRam00000001419e7d28;
  uStack_dc = uRam00000001419e7d2c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_50 = local_88;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_f8,3,&local_60);
  uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_e8,puVar2);
  }
  FUN_140042560(&local_e8,puVar1);
  if (&local_e8 != puVar3) {
    local_d8 = (undefined4)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e60910(1);
  local_68 = 0x183;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_e0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_e8,puVar2);
  }
  FUN_140042560(&local_e8,puVar1);
  FUN_1400460e0(uVar4,&local_e8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_68 = 0x185;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  uVar4 = FUN_140e78f40(0xffffffffffffffff,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar4;
  local_68 = 0x186;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
  local_d8 = _DAT_1419e7ca0;
  uStack_d4 = uRam00000001419e7ca4;
  uStack_d0 = uRam00000001419e7ca8;
  uStack_cc = uRam00000001419e7cac;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
  local_60 = &local_a8;
  local_d8 = _DAT_1419e7ca0;
  uStack_d4 = uRam00000001419e7ca4;
  uStack_d0 = uRam00000001419e7ca8;
  uStack_cc = uRam00000001419e7cac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_58 = local_98;
  local_d8 = _DAT_1419e7b70;
  uStack_d4 = uRam00000001419e7b74;
  uStack_d0 = uRam00000001419e7b78;
  uStack_cc = uRam00000001419e7b7c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_50 = local_88;
  FUN_140e63610(param_1,param_2,&local_f8,3,uVar4,&local_60);
  local_68 = 0x188;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar4,0);
  local_68 = 0x189;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar4,0);
  local_68 = 0x18b;
  if (puVar1 != &local_b8) {
    local_d8 = *(undefined4 *)puVar1;
    uStack_d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b8);
  local_68 = 0x18c;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e87930(uVar4,DAT_141a1dce0,0x80000000,&local_c8);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


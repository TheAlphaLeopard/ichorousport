// gml_Script_anon_42023_DefineTrinkets_TRINKETSINIT @ 0x14061a180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_42023_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_b0 = "gml_Script_anon@41618@DefineTrinkets@TRINKETSINIT";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x5c8;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x5c9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (puVar2 != &local_88) {
    local_98 = *puVar2;
    uStack_90 = puVar2[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_98);
  }
  local_58 = &local_88;
  local_98 = CONCAT44(uRam0000000141dd4f2c,_DAT_141dd4f28);
  uStack_90 = CONCAT44(DAT_141dd4f34,uRam0000000141dd4f30);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_98);
  local_50 = local_78;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_68,2,CONCAT44(uVar4,DAT_1419fcba8),&local_58);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_a8 = 0x5ca;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0;
    FUN_140e87930(uVar3,DAT_1419ffe48,0x80000000,&local_d8);
  }
  local_a8 = 0x5cc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0xc010000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ffd98,0x80000000,&local_e8);
  local_a8 = 0x5cd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ffdf8,0x80000000,&local_f8);
  local_a8 = 0x5ce;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ff838,0x80000000,&local_108);
  local_a8 = 0x5cf;
  uStack_90 = CONCAT44(0xd,(undefined4)uStack_90);
  local_98 = 0;
  local_48 = 0;
  uStack_40 = uStack_90;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_48);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ff7e8,0x80000000,&local_c8);
  local_a8 = 0x5d0;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 0xc010000000000000;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar3,DAT_1419ffc78,0x80000000,&local_118);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


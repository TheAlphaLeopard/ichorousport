// gml_Script_anon_70_gml_Object_oDevTools_Other_10 @ 0x140916eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_70_gml_Object_oDevTools_Other_10(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  uint local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  uint local_68 [3];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  uint *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  uint *local_20;
  
  local_50 = "gml_Object_oDevTools_Other_10";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar1 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef8e8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_48 = 3;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_e8,gml_Object_oDialogueBox_Create_0,0);
  if ((uint *)&local_e8 != puVar1) {
    local_d8 = (uint)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_a8) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = local_a8;
  local_d8 = DAT_141a56e70 & 0xffffff;
  uStack_d4 = (int)(DAT_141a56e70 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_d4 == 0xf) {
    uStack_d4 = 0x4000004;
  }
  else {
    uStack_d4 = uStack_d4 | 0x1000000;
  }
  uStack_dc = 0xf;
  local_e8 = CONCAT44(uStack_d4,DAT_141a56e70) & 0xffffffff00ffffff;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_38 = local_98;
  local_d8 = _DAT_141dd81c8;
  uStack_d4 = uRam0000000141dd81cc;
  uStack_d0 = uRam0000000141dd81d0;
  uStack_cc = DAT_141dd81d4;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_30 = local_88;
  FUN_140e645a0(&local_e8,FUN_140900350,param_1);
  local_d8 = (uint)local_e8;
  uStack_d4 = local_e8._4_4_;
  uStack_d0 = uStack_e0;
  uStack_cc = uStack_dc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_28 = local_78;
  uVar2 = CONCAT44(uVar3,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_c8,1,uVar2,&local_40);
  uVar3 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar1 != local_68) {
    local_d8 = *puVar1;
    uStack_d4 = puVar1[1];
    uStack_d0 = puVar1[2];
    uStack_cc = puVar1[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_d8);
  }
  local_20 = local_68;
  FUN_140e634e0(param_1,param_2,&local_b8,4,CONCAT44(uVar3,DAT_1419fd6d8),&local_38);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}


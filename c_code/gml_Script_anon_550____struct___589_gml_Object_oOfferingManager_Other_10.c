// gml_Script_anon_550____struct___589_gml_Object_oOfferingManager_Other_10 @ 0x140b8e780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_550____struct___589_gml_Object_oOfferingManager_Other_10
               (longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  uint *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Object_oOfferingManager_Other_10";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4ee8);
  local_8c = 0xffffff;
  local_98 = 0;
  local_48 = 2;
  puVar2 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57250);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_b8,gml_Script_anon_2238_anon_1205_gml_Object_oOfferingManager_Other_10,0);
  if ((uint *)&local_b8 != puVar1) {
    local_a8 = (uint)local_b8;
    uStack_a4 = local_b8._4_4_;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != local_88) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_40 = local_88;
  FUN_140e609c0(param_1);
  uVar3 = CONCAT44(uVar4,DAT_1419fd6d8);
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_98,1,uVar3,&local_40);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != puVar2) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  FUN_140e60910(1);
  local_48 = 0x39;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  local_a8 = DAT_141a56e70 & 0xffffff;
  uStack_a4 = (int)(DAT_141a56e70 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_a4 == 0xf) {
    uStack_a4 = 0x4000004;
  }
  else {
    uStack_a4 = uStack_a4 | 0x1000000;
  }
  uStack_ac = 0xf;
  local_b8 = CONCAT44(uStack_a4,DAT_141a56e70) & 0xffffffff00ffffff;
  uStack_a0 = uStack_b0;
  uStack_9c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_a8);
  local_40 = local_88;
  local_a8 = _DAT_141dd9fc8;
  uStack_a4 = uRam0000000141dd9fcc;
  uStack_a0 = uRam0000000141dd9fd0;
  uStack_9c = DAT_141dd9fd4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_38 = local_78;
  FUN_140e645a0(&local_b8,gml_Object_oOfferingManager_Other_5,param_1);
  local_a8 = (uint)local_b8;
  uStack_a4 = local_b8._4_4_;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_30 = local_68;
  FUN_140e634e0(param_1,param_2,&local_98,3,CONCAT44(uVar4,DAT_1419fd6d8),&local_40);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}


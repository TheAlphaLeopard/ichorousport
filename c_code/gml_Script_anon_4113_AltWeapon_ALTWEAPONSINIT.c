// gml_Script_anon_4113_AltWeapon_ALTWEAPONSINIT @ 0x140217b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4113_AltWeapon_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [12];
  byte local_24;
  undefined4 local_20 [3];
  byte local_14;
  
  local_40 = "gml_Script_anon@3869@AltWeapon@ALTWEAPONSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x91;
  _eh_vector_constructor_iterator_(local_30,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x92;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a918);
  local_58 = _DAT_141dc62e0;
  uStack_54 = uRam0000000141dc62e4;
  uStack_50 = uRam0000000141dc62e8;
  uStack_4c = uRam0000000141dc62ec;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_58);
  local_68 = local_30;
  if (puVar1 != local_20) {
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    if ((1 << (local_14 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_20);
    }
    FUN_140041b80(local_20,&local_58);
  }
  local_60 = local_20;
  puVar2 = (undefined8 *)FUN_140e79090(&local_78,2,&local_68);
  if (puVar2 != param_3) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_30,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


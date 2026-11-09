// gml_Script_anon_33628_DefineTrinkets_TRINKETSINIT @ 0x14060ba60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_33628_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_60 = "gml_Script_anon@31997@DefineTrinkets@TRINKETSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x48b;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x48c;
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87440(&local_a8,DAT_1419ffbb8,0x80000000,&local_88,(ulonglong)pcVar2 & 0xffffffffffffff00,
                0);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_88;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_a8);
  local_18 = local_40;
  local_a8 = CONCAT44(uRam00000001419e6b74,_DAT_1419e6b70);
  uStack_a0 = uRam00000001419e6b78;
  uStack_9c = uRam00000001419e6b7c;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_a8);
  local_10 = local_30;
  puVar1 = (undefined8 *)FUN_140e79090(&local_78,2,&local_18);
  if (puVar1 != &local_98) {
    local_a8 = *puVar1;
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_a8);
  }
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  FUN_140e87930(&local_a8,DAT_1419ffbb8,0x80000000,&local_98);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


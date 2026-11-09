// gml_Script_anon_11546_DefineTrinkets_TRINKETSINIT @ 0x1405ec790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11546_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = "gml_Script_anon@11161@DefineTrinkets@TRINKETSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x1ac;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x1ae;
  uStack_7c = 0xf;
  local_88 = 0x100000000000106;
  FUN_140e87440(&local_88,DAT_1419ffbc8,0x80000000,&local_98,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = CONCAT44(uRam00000001419e6aa4,_DAT_1419e6aa0);
  uStack_80 = uRam00000001419e6aa8;
  uStack_7c = uRam00000001419e6aac;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_88);
  local_60 = local_30;
  uStack_7c = 0xf;
  local_88 = 0x100000000000106;
  uVar1 = FUN_140069500(&local_88);
  FUN_140e63610(uVar1,param_2,&local_78,1,&local_98,&local_60);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


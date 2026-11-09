// gml_Script_MouseCenterInWindow @ 0x1403b9490

undefined8 *
gml_Script_MouseCenterInWindow(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_MouseWindowX";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 3;
  uVar1 = FUN_140e634e0(param_1,param_2,&local_88,0,DAT_141a56d80,0);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_78,0,DAT_141a59050,0);
  uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_90 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_98,puVar2);
  }
  FUN_1400462a0(&local_98,uVar1);
  if (&local_98 != param_3) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


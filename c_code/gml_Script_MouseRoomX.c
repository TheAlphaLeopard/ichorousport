// gml_Script_MouseRoomX @ 0x1403b9d30

undefined8 * gml_Script_MouseRoomX(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_40 = "gml_Script_MouseGuiX";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x19;
  uVar2 = 0;
  puVar1 = (undefined8 *)
           gml_Script____struct___96_WindowGetMonitorRect_GameViewRect(0,param_2,&local_98,0,0);
  if (puVar1 != &local_78) {
    local_88 = *puVar1;
    uStack_80 = *(undefined4 *)(puVar1 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_88);
  }
  local_38 = 0x1a;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar2 = uVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_78,DAT_141a01028,0x80000000,&local_58,uVar2,0);
  FUN_140e87440(&local_78,DAT_141a05568,0x80000000,&local_68,uVar2 & 0xffffffffffffff00,0);
  puVar1 = (undefined8 *)gml_Script_MouseCenterInWindow(param_1,param_2,&local_98,0,0);
  local_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_a0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_a8,puVar1);
  }
  FUN_1400462a0(&local_a8,&local_58);
  uStack_7c = local_9c;
  uStack_80 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_88 = local_a8;
  }
  else {
    FUN_1400419b0(&local_88,&local_a8);
  }
  FUN_140046500(&local_88,&local_68);
  if (&local_88 != param_3) {
    local_28 = (undefined4)local_88;
    uStack_24 = local_88._4_4_;
    uStack_20 = uStack_80;
    uStack_1c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_28);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


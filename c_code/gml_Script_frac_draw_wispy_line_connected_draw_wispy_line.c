// gml_Script_frac_draw_wispy_line_connected_draw_wispy_line @ 0x140280ae0

undefined8 *
gml_Script_frac_draw_wispy_line_connected_draw_wispy_line
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script__taper@draw_wispy_line_connected@draw_wispy_line";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x1c;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
  }
  local_6c = 0;
  local_78 = 0x3ff0000000000000;
  FUN_1400462a0(&local_78,puVar1);
  if (0 < param_4) {
    puVar2 = (undefined8 *)*param_5;
  }
  uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_60 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_68,puVar2);
  }
  FUN_140042560(&local_68,&local_78);
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_38 = 0x1d;
  local_6c = local_7c;
  local_70 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_78 = local_88;
  }
  else {
    FUN_1400419b0(&local_78,&local_88);
  }
  FUN_140042560(&local_78,&local_88);
  uStack_5c = local_6c;
  uStack_60 = local_70;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_68 = local_78;
  }
  else {
    FUN_1400419b0(&local_68,&local_78);
  }
  uStack_4c = 7;
  local_58 = 0x10;
  FUN_140042560(&local_68,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_68 != param_3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


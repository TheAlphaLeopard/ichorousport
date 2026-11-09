// gml_Script_get_text_anon_35500___scribble_class_element___scribble_class_element @ 0x140129110

longlong *
gml_Script_get_text_anon_35500___scribble_class_element___scribble_class_element
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_on_last_page@anon@35117@__scribble_class_element@__scribble_class_element";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_5c = 0;
  uVar5 = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x445;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05f48);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a059d8);
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_78,0,uVar3,0);
  local_8c = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_90 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_98,puVar4);
  }
  local_7c = 7;
  local_88[0] = 1;
  FUN_1400462a0(&local_98,local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  uVar2 = FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
  uVar1 = FUN_140e851f0(uVar2,&local_98,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (uVar1 < 0x80000000) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


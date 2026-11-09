// gml_Script_total_sec @ 0x1405dd2a0

undefined8 *
gml_Script_total_sec
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_a8;
  uint local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  byte local_54;
  undefined8 *local_50;
  char *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = "gml_Script_current_sec";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_88;
  local_78 = 9;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xb;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_60) goto LAB_1405dd383;
  }
  local_98 = *(undefined4 *)param_5;
  uStack_94 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_90 = *(undefined4 *)(param_5 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_98);
LAB_1405dd383:
  local_48 = "gml_Script_total_sec";
  local_50 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_50;
  local_9c = 5;
  local_a8 = 0;
  local_40 = 0x17;
  puVar2 = (undefined8 *)FUN_14018a720(&local_98,&local_60,1000);
  if (puVar2 != &local_a8) {
    local_38 = *(undefined4 *)puVar2;
    uStack_34 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_30 = *(undefined4 *)(puVar2 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_38);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 **)local_50;
  if ((local_9c & 0xffffff) == 0) {
    uVar3 = (undefined4)local_a8;
  }
  else {
    uVar3 = FUN_140e4b060(&local_a8);
  }
  uVar1 = FUN_1412a79b0(uVar3,0x404e000000000000);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = uVar1;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 **)local_88;
  return param_3;
}


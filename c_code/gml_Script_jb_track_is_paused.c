// gml_Script_jb_track_is_paused @ 0x14039dcb0

undefined8 *
gml_Script_jb_track_is_paused
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  byte local_24;
  
  local_50 = "gml_Script_jb_track_set";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x14a;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f4a68);
  local_8c = 0xffffff;
  local_98 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x14b;
  FUN_140e87440(uVar1,DAT_1419f4b08,0x80000000,&local_98,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_30) goto LAB_14039ddd8;
  }
  local_78 = *(undefined4 *)param_5;
  uStack_74 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_70 = *(undefined4 *)(param_5 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_30);
  }
  FUN_140041b80(&local_30,&local_78);
LAB_14039ddd8:
  local_60 = &local_30;
  uVar1 = FUN_140069500(uVar1);
  puVar2 = (undefined8 *)FUN_140e63610(uVar1,param_2,&local_88,1,&local_98,&local_60);
  if (puVar2 != param_3) {
    local_78 = *(undefined4 *)puVar2;
    uStack_74 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_70 = *(undefined4 *)(puVar2 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


// gml_Script_scribble_color_set @ 0x140458290

undefined8 *
gml_Script_scribble_color_set
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50 [3];
  byte local_44;
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_scribble_color_get";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 7;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddef64) &&
     (_Init_thread_header(&DAT_141ddef64), DAT_141ddef64 == -1)) {
    DAT_141ddef68 = (longlong *)FUN_140e63aa0(DAT_1419f77f8);
    _Init_thread_footer(&DAT_141ddef64);
  }
  if (DAT_141ddc181 == '\0') {
    FUN_140e64380(DAT_141ddef68,"gml_Script_scribble_color_get");
    FUN_140e64380(param_1,"gml_Script_scribble_color_get");
  }
  local_58 = 9;
  if (DAT_141ddc181 == '\0') {
    DAT_141ddc181 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddef68 + 0x10))(DAT_141ddef68,DAT_1419f77d8);
    FUN_140e609c0(DAT_141ddef68);
    uVar4 = 0;
    puVar2 = (undefined4 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_98,0,0);
    if (puVar2 != puVar1) {
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
  }
  local_58 = 10;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar1 = (undefined4 *)(**(code **)(*DAT_141ddef68 + 8))(DAT_141ddef68,DAT_1419f77d8);
  if (puVar1 != local_50) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_78);
  }
  local_88 = local_50;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_40) goto LAB_1404584fa;
  }
  local_78 = *(undefined4 *)param_5;
  uStack_74 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_70 = *(undefined4 *)(param_5 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_78);
LAB_1404584fa:
  local_80 = &local_40;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar4,DAT_141a01138),&local_88);
  if (puVar3 != param_3) {
    local_78 = *(undefined4 *)puVar3;
    uStack_74 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_70 = *(undefined4 *)(puVar3 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


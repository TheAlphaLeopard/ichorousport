// gml_Script_ProgressBar_anon_96738_ImGui_ImGui @ 0x1402c8fd0

undefined8 *
gml_Script_ProgressBar_anon_96738_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [48];
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_d0 = "gml_Script_CheckboxFlags@anon@96124@ImGui@ImGui";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0xb74;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb75;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402c9094:
    local_f8 = *(undefined4 *)puVar1;
    uStack_f4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_f8);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_88) goto LAB_1402c9094;
  }
  local_40 = &local_88;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 == &local_78) goto LAB_1402c910d;
  }
  local_f8 = *(undefined4 *)puVar1;
  uStack_f4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_f8);
LAB_1402c910d:
  local_38 = &local_78;
  if ((param_4 < 3) || (puVar2 = (undefined8 *)param_5[2], puVar2 != &local_68)) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_f8);
  }
  local_30 = &local_68;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_e8,3,DAT_141a59730,&local_40);
  if (puVar2 != param_3) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


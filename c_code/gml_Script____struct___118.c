// gml_Script____struct___118 @ 0x1402e7280

undefined8 *
gml_Script____struct___118
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 local_48 [3];
  byte local_3c;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined4 *local_20;
  
  local_90 = "gml_Script_anon@6431@INIT";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xe7;
  _eh_vector_constructor_iterator_(local_78,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xe9;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_68) goto LAB_1402e7372;
  }
  local_d8 = *param_5;
  uStack_d0 = *(undefined4 *)(param_5 + 1);
  uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_d8);
LAB_1402e7372:
  local_30 = &local_68;
  uStack_cc = DAT_141dcf1e4;
  uStack_d0 = DAT_141dcf1e0;
  if ((1 << ((byte)DAT_141dcf1e4 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dcf1d8;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dcf1d8);
  }
  uVar1 = uStack_cc;
  local_c8 = (undefined4)local_d8;
  uStack_c4 = local_d8._4_4_;
  uStack_c0 = uStack_d0;
  uStack_bc = uStack_cc;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_c8);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_28 = local_58;
  puVar2 = (undefined4 *)gml_Script____struct___117(param_1,param_2,&local_b8,1,&local_30);
  if (puVar2 != local_48) {
    local_c8 = *puVar2;
    uStack_c4 = puVar2[1];
    uStack_c0 = puVar2[2];
    uStack_bc = puVar2[3];
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140041b80(local_48,&local_c8);
  }
  local_20 = local_48;
  puVar3 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_a8,2,&local_28);
  if (puVar3 != param_3) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


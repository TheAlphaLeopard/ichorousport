// gml_Script_msdf_feather_anon_41828___scribble_class_element___scribble_class_element @ 0x14012d8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_msdf_feather_anon_41828___scribble_class_element___scribble_class_element
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  uint local_d0 [2];
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 *local_58 [6];
  
  local_e0 = "gml_Script_msdf_shadow@anon@41285@__scribble_class_element@__scribble_class_element";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x53b;
  FUN_140041df0(local_d0,param_4,5,param_5);
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x53b;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_d0[0];
  if ((int)local_d0[0] < 5) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_c8[4];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_d8 = 0x53b;
    if (4 < (int)local_d0[0]) {
      puVar4 = (undefined8 *)local_c8[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3fd0000000000000;
  }
  local_d8 = 0x53d;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_c0 = _DAT_141dcb408;
  uStack_bc = uRam0000000141dcb40c;
  uStack_b8 = uRam0000000141dcb410;
  uStack_b4 = DAT_141dcb414;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_c0);
  local_58[0] = local_a8;
  FUN_1401ef7f0(param_1,param_2,&local_f8,1,local_58);
  local_d8 = 0x53e;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  if (0 < (int)local_d0[0]) {
    puVar4 = local_c8;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_c8);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


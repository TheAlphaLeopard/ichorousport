// gml_Script_string_height_scribble_ext @ 0x1405d70b0

longlong *
gml_Script_string_height_scribble_ext
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [32];
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_b0 = "gml_Script_string_contains";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0;
  uVar5 = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 2;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_78) goto LAB_1405d719d;
  }
  local_d8 = *puVar2;
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
LAB_1405d719d:
  local_48 = &local_78;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_68)) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_d8);
  }
  local_40 = &local_68;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,2,DAT_141a02d88,&local_48);
  uStack_cc = 0;
  local_d8 = 0;
  iVar1 = FUN_140e851f0(uVar3,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (0 < iVar1) {
    uVar5 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar5 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


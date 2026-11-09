// gml_Script_IsBetween @ 0x140391370

undefined8 *
gml_Script_IsBetween
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [32];
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_c0 = "gml_Script_is_solid";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 1;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 2;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_88) goto LAB_14039145b;
  }
  local_f8 = *puVar1;
  uStack_f0 = *(undefined4 *)(puVar1 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_f8);
LAB_14039145b:
  local_48 = &local_88;
  if ((param_4 < 2) || (puVar2 = (undefined8 *)param_5[1], puVar2 != &local_78)) {
    local_f8 = *puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_f8);
  }
  local_40 = &local_78;
  uStack_ec = 0xf;
  local_f8 = 0x100000000000149;
  local_d8 = 0x149;
  uStack_d4 = 0x1000000;
  uStack_d0 = uStack_f0;
  uStack_cc = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_d8);
  local_38 = local_68;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar3,DAT_141a12628),&local_48);
  if (puVar2 != param_3) {
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


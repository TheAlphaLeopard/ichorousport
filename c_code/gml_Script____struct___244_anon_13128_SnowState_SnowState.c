// gml_Script____struct___244_anon_13128_SnowState_SnowState @ 0x140500f90

undefined8 *
gml_Script____struct___244_anon_13128_SnowState_SnowState
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined4 *local_40 [3];
  
  local_b0 = "gml_Script_anon@12624@SnowState@SnowState";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 399;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 400;
  uVar1 = FUN_140e4cb40(DAT_141a618e8 * 8);
  FUN_141290260(uVar1,DAT_141a618e0,(longlong)DAT_141a618e8 << 3);
  local_a8 = 0x191;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_50 = local_88;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_78) goto LAB_140501143;
  }
  local_f8 = *(undefined4 *)param_5;
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_f0 = *(undefined4 *)(param_5 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_f8);
LAB_140501143:
  local_48 = &local_78;
  uVar1 = CONCAT44(uVar4,DAT_1419fed78);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_e8,2,uVar1,&local_50);
  uVar4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (puVar2 != local_68) {
    local_f8 = *puVar2;
    uStack_f4 = puVar2[1];
    uStack_f0 = puVar2[2];
    uStack_ec = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_f8);
  }
  local_40[0] = local_68;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar4,DAT_141a07928),local_40);
  if (puVar3 != param_3) {
    local_f8 = *(undefined4 *)puVar3;
    uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


// gml_Script____struct___366_gml_Object_oBossPestHead_Create_0 @ 0x1407b09e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___366_gml_Object_oBossPestHead_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  
  local_80 = "gml_Script_anon@1882@___struct___366@gml_Object_oBossPestHead_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x78;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x79;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08e88);
  local_108 = CONCAT44(uRam00000001419e8554,_DAT_1419e8550);
  uStack_100 = uRam00000001419e8558;
  uStack_fc = uRam00000001419e855c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_108);
  local_70 = local_e8;
  local_108 = CONCAT44(uRam00000001419e8524,_DAT_1419e8520);
  uStack_100 = uRam00000001419e8528;
  uStack_fc = uRam00000001419e852c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_68 = local_d8;
  if (puVar1 != &local_c8) {
    local_108 = *puVar1;
    uStack_100 = *(undefined4 *)(puVar1 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_108);
  }
  local_60 = &local_c8;
  local_108 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_100 = uRam00000001419df7c8;
  uStack_fc = uRam00000001419df7cc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_108);
  local_58 = local_b8;
  ppuVar2 = &local_70;
  FUN_14044e5b0(param_1,param_2,&local_118,4,ppuVar2);
  uVar3 = (undefined4)((ulonglong)ppuVar2 >> 0x20);
  local_78 = 0x7a;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_fc = 0xf;
  local_108 = 0x10000020000016b;
  local_f8 = 0x16b;
  uStack_f4 = 0x1000002;
  uStack_f0 = uStack_100;
  uStack_ec = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_f8);
  local_70 = local_e8;
  local_f8 = _DAT_1419e8510;
  uStack_f4 = uRam00000001419e8514;
  uStack_f0 = uRam00000001419e8518;
  uStack_ec = uRam00000001419e851c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_68 = local_d8;
  local_f8 = _DAT_1419df7a0;
  uStack_f4 = uRam00000001419df7a4;
  uStack_f0 = uRam00000001419df7a8;
  uStack_ec = uRam00000001419df7ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_f8);
  local_60 = &local_c8;
  local_f8 = _DAT_1419e8570;
  uStack_f4 = uRam00000001419e8574;
  uStack_f0 = uRam00000001419e8578;
  uStack_ec = uRam00000001419e857c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_f8);
  local_58 = local_b8;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_f8);
  local_50 = local_a8;
  local_98 = FUN_140e794b0(0x33333333,0x3ff4000000000000);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_48 = &local_98;
  FUN_140e634e0(param_1,param_2,&local_118,6,CONCAT44(uVar3,DAT_141a0a2e8),&local_70);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


// gml_Script_scribble_font_rename @ 0x14046e5e0

undefined8 *
gml_Script_scribble_font_rename
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [32];
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined4 *local_30;
  
  local_d0 = "gml_Script_scribble_font_has_character";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 8;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 10;
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_98) goto LAB_14046e6fa;
  }
  local_128 = *(undefined4 *)puVar1;
  uStack_124 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_120 = *(undefined4 *)(puVar1 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_128);
LAB_14046e6fa:
  local_48 = &local_98;
  ppuVar5 = &local_48;
  uVar2 = FUN_1401effd0(param_1,param_2,&local_118,1,ppuVar5);
  uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a06148,0x80000000,&local_108,uVar6,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar6 >> 0x20);
  if ((param_4 < 2) || (puVar4 = (undefined8 *)param_5[1], puVar4 != &local_88)) {
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  local_40 = &local_88;
  local_128 = (undefined4)local_108;
  uStack_124 = local_108._4_4_;
  uStack_120 = uStack_100;
  uStack_11c = uStack_fc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_128);
  local_38 = local_78;
  uVar2 = CONCAT44(uVar7,DAT_1419fdc48);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,1,uVar2,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar3 != local_68) {
    local_128 = *puVar3;
    uStack_124 = puVar3[1];
    uStack_120 = puVar3[2];
    uStack_11c = puVar3[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_128);
  }
  local_30 = local_68;
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,2,CONCAT44(uVar7,DAT_141a01478),&local_38);
  if (puVar4 != param_3) {
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


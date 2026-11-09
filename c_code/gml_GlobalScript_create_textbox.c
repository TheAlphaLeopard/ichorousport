// gml_GlobalScript_create_textbox @ 0x140264100

undefined8 *
gml_GlobalScript_create_textbox
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
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
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_a0 = "gml_Script_title_line_height";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x38;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x3a;
  local_fc = DAT_141dce0d4;
  local_100 = DAT_141dce0d0;
  if ((1 << ((byte)DAT_141dce0d4 & 0x1f) & 0x46U) == 0) {
    local_108 = DAT_141dce0c8;
  }
  else {
    FUN_1400419b0(&local_108,&DAT_141dce0c8);
  }
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_11c = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_120 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *param_5;
  }
  else {
    FUN_1400419b0(&local_128);
  }
  FUN_1400460e0(&local_128,&local_108);
  local_f8 = (undefined4)local_128;
  uStack_f4 = local_128._4_4_;
  uStack_f0 = uStack_120;
  uStack_ec = uStack_11c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_40 = local_78;
  local_f8 = (undefined4)DAT_1419df7b0;
  uStack_f4 = DAT_1419df7b0._4_4_;
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  local_38 = local_68;
  ppuVar6 = &local_40;
  puVar3 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_c8,2,ppuVar6);
  if (puVar3 != &local_118) {
    local_f8 = *(undefined4 *)puVar3;
    uStack_f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_f8);
  }
  FUN_140e87440(&local_118,DAT_141a05018,0x80000000,&local_e8,
                (ulonglong)ppuVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  switch(local_10c) {
  default:
switchD_1402643a8_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_118;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1402643a8_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar4 = FUN_140e87250(uVar2);
  }
  puVar3 = &local_e8;
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_d8,0,puVar3,0);
  uVar2 = (undefined4)((ulonglong)puVar3 >> 0x20);
  uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_120 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_128,puVar5);
  }
  local_fc = 0;
  local_108 = 0x3fe4cccccccccccd;
  FUN_140042560(&local_128,&local_108);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_f8 = (undefined4)local_128;
  uStack_f4 = local_128._4_4_;
  uStack_f0 = uStack_120;
  uStack_ec = uStack_11c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_f8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_30 = local_58;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar2,DAT_141a08838),&local_30);
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
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


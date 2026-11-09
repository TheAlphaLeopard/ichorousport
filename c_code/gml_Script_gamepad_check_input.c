// gml_Script_gamepad_check_input @ 0x140285320

undefined8 *
gml_Script_gamepad_check_input
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 **in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_58 [2];
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_RoundPos";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xf;
  FUN_140041df0(local_48,param_4,2,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xf;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0xf;
    uStack_dc = 0xd;
    local_e8 = 0x3ff0000000000000;
    if ((int)local_48[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_40;
      if (&local_e8 == puVar3) goto LAB_140285483;
    }
    local_c8 = 0;
    uStack_c4 = 0x3ff00000;
    uStack_c0 = uStack_e0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
LAB_140285483:
  if ((int)local_48[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_40[1];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_dc = 0xd;
    local_e8 = 0x3ff0000000000000;
    if ((int)local_48[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_40[1];
      if (&local_e8 == puVar3) goto LAB_1402854fe;
    }
    local_c8 = 0;
    uStack_c4 = 0x3ff00000;
    uStack_c0 = uStack_e0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
LAB_1402854fe:
  local_a8 = 0x11;
  if ((int)local_48[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_40;
  }
  cVar1 = FUN_140e491e0(puVar3);
  if (cVar1 != '\0') {
    local_a8 = 0x11;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_dc = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_88,uVar7,
                  (ulonglong)in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = uStack_80;
    uStack_bc = uStack_7c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_58[0] = local_78;
    in_stack_ffffffffffffff10 = local_58;
    pcVar6 = (code *)CONCAT44(uVar8,DAT_1419fd658);
    FUN_140e634e0(param_1,param_2,&local_d8,1,pcVar6,in_stack_ffffffffffffff10);
  }
  local_a8 = 0x12;
  if (1 < (int)local_48[0]) {
    puVar5 = (undefined8 *)local_40[1];
  }
  cVar1 = FUN_140e491e0(puVar5);
  if (cVar1 != '\0') {
    local_a8 = 0x12;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uStack_dc = 6;
    uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
    local_e8 = param_1;
    FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_98,uVar7,
                  (ulonglong)in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_c8 = (undefined4)local_98;
    uStack_c4 = local_98._4_4_;
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_c8);
    local_58[0] = local_78;
    FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar8,DAT_1419fd658),local_58);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar5 = local_40;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


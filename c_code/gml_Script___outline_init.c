// gml_Script___outline_init @ 0x1400ecd30

undefined8 *
gml_Script___outline_init
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_70 = "gml_Script____struct___33@__ol_cache@__scr_outline";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 6;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a04a98);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a04938);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a048a8);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcc7c) &&
     (_Init_thread_header(&DAT_141ddcc7c), DAT_141ddcc7c == -1)) {
    DAT_141ddcdb8 = FUN_140e63aa0(DAT_141a04b18);
    _Init_thread_footer(&DAT_141ddcc7c);
  }
  FUN_140e643a0(param_1,DAT_141ddcdb8);
  local_68 = 8;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ac8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_d8,gml_Script____struct___36____struct___33___ol_cache___scr_outline,0);
  if (&local_d8 != puVar1) {
    local_c8 = (undefined4)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_a8) {
    local_c8 = *(undefined4 *)puVar1;
    uStack_c4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_c0 = *(undefined4 *)(puVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_60 = &local_a8;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar6,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0x12;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04708);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar1) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  local_68 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a048b8);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar1) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  local_68 = 0x14;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04958);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar1) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  local_68 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04748);
  uStack_cc = 0xd;
  local_d8 = 0;
  if (&local_d8 != puVar1) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = uStack_d0;
    uStack_bc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_c8);
  }
  local_68 = 0x17;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04418);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_d8,gml_Script____struct___33___ol_cache___scr_outline,0);
  if (&local_d8 != puVar2) {
    local_c8 = (undefined4)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_a8) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_60 = &local_a8;
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_98) goto LAB_1400ed255;
  }
  local_c8 = *(undefined4 *)puVar2;
  uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
LAB_1400ed255:
  local_58 = &local_98;
  if ((param_4 < 2) || (puVar1 = (undefined8 *)param_5[1], puVar1 != &local_88)) {
    local_c8 = *(undefined4 *)puVar1;
    uStack_c4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_c0 = *(undefined4 *)(puVar1 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_50 = &local_88;
  FUN_140e609c0(param_1);
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,3,uVar6,&local_60);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != puVar4) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  local_68 = 0x1d;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04928);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_d8,gml_Script___ol_cache,0);
  if (&local_d8 != puVar3) {
    local_c8 = (undefined4)local_d8;
    uStack_c4 = local_d8._4_4_;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_a8) {
    local_c8 = *(undefined4 *)puVar3;
    uStack_c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_60 = &local_a8;
  FUN_140e609c0(param_1);
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar7,DAT_1419fd6d8),&local_60);
  if (puVar5 != puVar4) {
    local_c8 = *puVar5;
    uStack_c4 = puVar5[1];
    uStack_c0 = puVar5[2];
    uStack_bc = puVar5[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_c8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


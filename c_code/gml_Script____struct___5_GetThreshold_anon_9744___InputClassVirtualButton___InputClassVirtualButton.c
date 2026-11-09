// gml_Script____struct___5_GetThreshold_anon_9744___InputClassVirtualButton___InputClassVirtualButton @ 0x14005a8b0

undefined8 *
gml_Script____struct___5_GetThreshold_anon_9744___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_f0 = "gml_Script_GetVerbs@anon@9051@__InputClassVirtualButton@__InputClassVirtualButton";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x135;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fe2d8);
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc378) {
    _Init_thread_header(&DAT_141ddc378);
    if (DAT_141ddc378 == -1) {
      DAT_141ddc390 = (longlong *)FUN_140e63aa0(DAT_1419fe078);
      _Init_thread_footer(&DAT_141ddc378);
    }
  }
  if (DAT_141ddc031 == '\0') {
    FUN_140e64380(DAT_141ddc390,
                  "gml_Script_GetVerbs@anon@9051@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_GetVerbs@anon@9051@__InputClassVirtualButton@__InputClassVirtualButton"
                 );
  }
  local_e8 = 0x137;
  if (DAT_141ddc031 == '\0') {
    DAT_141ddc031 = '\x01';
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddc390 + 0x10))(DAT_141ddc390,DAT_1419fe7f8);
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_d8,
                  gml_Script_Threshold_anon_9531___InputClassVirtualButton___InputClassVirtualButton
                  ,0);
    if (&local_d8 != puVar1) {
      local_158 = local_d8;
      uStack_154 = uStack_d4;
      uStack_150 = uStack_d0;
      uStack_14c = uStack_cc;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_158);
    }
    FUN_140e60910(1);
    if (puVar1 != local_b8) {
      local_158 = *puVar1;
      uStack_154 = puVar1[1];
      uStack_150 = puVar1[2];
      uStack_14c = puVar1[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_158);
    }
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_58 = local_b8;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_158);
    local_50 = local_a8;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_158);
    local_48 = local_98;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_158);
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    local_40 = local_88;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_158);
    local_38 = local_78;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_158);
    local_30 = local_68;
    FUN_140e609c0(DAT_141ddc390);
    puVar1 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_c8,6,CONCAT44(uVar5,DAT_1419fd6d8),&local_58);
    if (puVar1 != puVar2) {
      local_158 = *puVar1;
      uStack_154 = puVar1[1];
      uStack_150 = puVar1[2];
      uStack_14c = puVar1[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_158);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0x13f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe0c8);
  uVar4 = (**(code **)(*DAT_141ddc390 + 8))(DAT_141ddc390,DAT_1419fe7f8);
  if (puVar3 != &local_108) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  FUN_140e87930(uVar4,DAT_1419fe818,0x80000000,&local_108);
  local_e8 = 0x140;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd0b8);
  if (puVar3 != &local_118) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  uVar4 = (**(code **)(*DAT_141ddc390 + 8))(DAT_141ddc390,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe318,0x80000000,&local_118);
  local_e8 = 0x141;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd008);
  if (puVar3 != &local_128) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  uVar4 = (**(code **)(*DAT_141ddc390 + 8))(DAT_141ddc390,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe1f8,0x80000000,&local_128);
  local_e8 = 0x142;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd108);
  if (puVar3 != &local_138) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  uVar4 = (**(code **)(*DAT_141ddc390 + 8))(DAT_141ddc390,DAT_1419fe7f8);
  FUN_140e87930(uVar4,DAT_1419fe218,0x80000000,&local_138);
  local_e8 = 0x143;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcfd8);
  if (puVar3 != &local_148) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_158);
  }
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc390 + 8))(DAT_141ddc390,DAT_1419fe7f8);
  FUN_140e87930(puVar3,DAT_1419fe808,0x80000000,&local_148);
  local_e8 = 0x145;
  if (puVar3 != param_3) {
    local_158 = *(undefined4 *)puVar3;
    uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_150 = *(undefined4 *)(puVar3 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}


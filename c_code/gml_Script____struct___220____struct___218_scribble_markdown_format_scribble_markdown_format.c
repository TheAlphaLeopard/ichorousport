// gml_Script____struct___220____struct___218_scribble_markdown_format_scribble_markdown_format @ 0x140478880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___220____struct___218_scribble_markdown_format_scribble_markdown_format
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 uVar9;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 **in_stack_fffffffffffffea0;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = 
  "gml_Script__func_insert_buffer@anon@7808@scribble_markdown_format@scribble_markdown_format";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x83;
  FUN_140041df0(local_48,param_4,4,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf13c) &&
     (_Init_thread_header(&DAT_141ddf13c), DAT_141ddf13c == -1)) {
    DAT_141ddf0c8 = (longlong *)FUN_140e63aa0(DAT_1419f93e8);
    _Init_thread_footer(&DAT_141ddf13c);
  }
  local_a8 = 0x83;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0x83;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_48[0] < 1) {
      puVar2 = &DAT_1419df7b0;
LAB_140478a3c:
      local_118 = *puVar2;
      uStack_110 = *(undefined4 *)(puVar2 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_118);
    }
    else {
      puVar2 = (undefined8 *)*local_40;
      if (puVar2 != &local_c8) goto LAB_140478a3c;
    }
    local_80 = &local_c8;
    in_stack_fffffffffffffea0 = &local_80;
    uVar3 = CONCAT44(uVar9,DAT_141a090f8);
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_158,1,uVar3,in_stack_fffffffffffffea0);
    uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_138,puVar2);
    }
    uStack_10c = 7;
    local_118 = CONCAT44(local_118._4_4_,2);
    FUN_1400462a0(&local_138,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((int)local_48[0] < 4) {
      puVar2 = &DAT_1419df7b0;
LAB_140478b31:
      local_148 = (undefined4)local_138;
      uStack_144 = local_138._4_4_;
      uStack_140 = uStack_130;
      uStack_13c = uStack_12c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_148);
    }
    else {
      puVar2 = (undefined8 *)local_40[3];
      if (&local_138 != puVar2) goto LAB_140478b31;
    }
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
  }
  if (DAT_141ddc199 == '\0') {
    FUN_140e64380(DAT_141ddf0c8,
                  "gml_Script__func_insert_buffer@anon@7808@scribble_markdown_format@scribble_markdown_format"
                 );
    FUN_140e64380(param_1,
                  "gml_Script__func_insert_buffer@anon@7808@scribble_markdown_format@scribble_markdown_format"
                 );
  }
  local_a8 = 0x85;
  if (DAT_141ddc199 == '\0') {
    DAT_141ddc199 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf0c8 + 0x10))(DAT_141ddf0c8,DAT_1419f9278);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = (undefined4)DAT_1419df7b0;
    uStack_144 = DAT_1419df7b0._4_4_;
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_a0 = &local_108;
    ppuVar7 = &local_a0;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_158,1,ppuVar7);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a09108,0x80000000,&local_58,uVar8,
                  (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    FUN_140e609c0(DAT_141ddf0c8);
    if (&local_58 != puVar2) {
      local_148 = (undefined4)local_58;
      uStack_144 = local_58._4_4_;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_148);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x87;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_48[0] < 3) {
    puVar2 = &DAT_1419df7b0;
LAB_140478d32:
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  else {
    puVar2 = (undefined8 *)local_40[2];
    if (puVar2 != &local_108) goto LAB_140478d32;
  }
  local_a0 = &local_108;
  uVar3 = CONCAT44(uVar9,DAT_141a090a8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_128) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_a8 = 0x88;
  uStack_10c = 0;
  local_118 = 0;
  iVar1 = FUN_140e851f0(&local_128,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar1 != -2 && iVar1 < 1) {
    local_a8 = 0x88;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0;
    goto LAB_140479615;
  }
  local_a8 = 0x8a;
  if ((int)local_48[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_40[3];
  }
  if ((int)local_48[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[1];
  }
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_130 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_138);
  }
  FUN_1400462a0(&local_138,puVar2);
  local_148 = (undefined4)local_138;
  uStack_144 = local_138._4_4_;
  uStack_140 = uStack_130;
  uStack_13c = uStack_12c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_148);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_a8 = 0x8b;
  uStack_12c = uStack_11c;
  uStack_130 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  FUN_1400460e0(&local_138,&local_78);
  local_148 = (undefined4)local_138;
  uStack_144 = local_138._4_4_;
  uStack_140 = uStack_130;
  uStack_13c = uStack_12c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_148);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_a8 = 0x8d;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf0c8 + 8))(DAT_141ddf0c8,DAT_1419f9278);
  if (puVar2 != &local_108) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  local_a0 = &local_108;
  local_148 = _DAT_141dc6650;
  uStack_144 = uRam0000000141dc6654;
  uStack_140 = uRam0000000141dc6658;
  uStack_13c = uRam0000000141dc665c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_98 = &local_f8;
  local_148 = _DAT_1419e5ef0;
  uStack_144 = uRam00000001419e5ef4;
  uStack_140 = uRam00000001419e5ef8;
  uStack_13c = uRam00000001419e5efc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_90 = (undefined8 *)local_e8;
  if ((int)local_48[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_1404790e5:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)local_40[2];
    if (puVar4 != &local_d8) goto LAB_1404790e5;
  }
  local_88 = &local_d8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f18);
  FUN_140e634e0(param_1,param_2,&local_158,4,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0x8e;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_48[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140479191:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*local_40;
    if (puVar4 != &local_108) goto LAB_140479191;
  }
  local_a0 = &local_108;
  if ((int)local_48[0] < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_1404791e0:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)local_40[3];
    if (puVar4 != &local_f8) goto LAB_1404791e0;
  }
  local_98 = &local_f8;
  local_90 = &local_78;
  if (puVar2 != &local_d8) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  local_88 = &local_d8;
  local_80 = &local_128;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_158,5,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0x8f;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (puVar2 != &local_108) {
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  local_a0 = &local_108;
  local_148 = _DAT_141dc6650;
  uStack_144 = uRam0000000141dc6654;
  uStack_140 = uRam0000000141dc6658;
  uStack_13c = uRam0000000141dc665c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_98 = &local_f8;
  local_90 = &local_68;
  if ((int)local_48[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140479363:
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_148);
  }
  else {
    puVar2 = (undefined8 *)*local_40;
    if (puVar2 != &local_d8) goto LAB_140479363;
  }
  local_88 = &local_d8;
  if ((int)local_48[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_1404793b2:
    local_148 = *(undefined4 *)puVar2;
    uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_140 = *(undefined4 *)(puVar2 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
  }
  else {
    puVar2 = (undefined8 *)local_40[3];
    if (puVar2 != &local_c8) goto LAB_1404793b2;
  }
  local_80 = &local_c8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_158,5,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0x91;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (((int)local_48[0] < 1) || (puVar6 = (undefined8 *)*local_40, puVar6 != &local_108)) {
    local_148 = *(undefined4 *)puVar6;
    uStack_144 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  local_a0 = &local_108;
  local_148 = _DAT_1419e5ed0;
  uStack_144 = uRam00000001419e5ed4;
  uStack_140 = uRam00000001419e5ed8;
  uStack_13c = uRam00000001419e5edc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_98 = &local_f8;
  uStack_12c = uStack_11c;
  uStack_130 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_138 = local_128;
  }
  else {
    FUN_1400419b0(&local_138,&local_128);
  }
  uStack_10c = 7;
  local_118 = CONCAT44(local_118._4_4_,1);
  FUN_1400462a0(&local_138,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_148 = (undefined4)local_138;
  uStack_144 = local_138._4_4_;
  uStack_140 = uStack_130;
  uStack_13c = uStack_12c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_90 = (undefined8 *)local_e8;
  FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar9,DAT_141a05a38),&local_a0);
  local_a8 = 0x93;
  if (&local_128 != param_3) {
    local_148 = (undefined4)local_128;
    uStack_144 = local_128._4_4_;
    uStack_140 = uStack_120;
    uStack_13c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
LAB_140479615:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar6 = local_40;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


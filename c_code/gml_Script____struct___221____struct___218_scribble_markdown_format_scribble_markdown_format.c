// gml_Script____struct___221____struct___218_scribble_markdown_format_scribble_markdown_format @ 0x140479750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___221____struct___218_scribble_markdown_format_scribble_markdown_format
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
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_b0 = 
  "gml_Script__func_delete_and_insert_buffer@anon@8609@scribble_markdown_format@scribble_markdown_format"
  ;
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x96;
  FUN_140041df0(local_38,param_4,5,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf14c) &&
     (_Init_thread_header(&DAT_141ddf14c), DAT_141ddf14c == -1)) {
    DAT_141ddf0d8 = (longlong *)FUN_140e63aa0(DAT_1419f9438);
    _Init_thread_footer(&DAT_141ddf14c);
  }
  local_a8 = 0x96;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_a8 = 0x96;
    if ((int)local_38[0] < 4) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_30[3];
      if (puVar2 == (undefined8 *)&DAT_141dd3398) goto LAB_14047991b;
    }
    local_c8 = _DAT_141dd3398;
    uStack_c4 = uRam0000000141dd339c;
    uStack_c0 = uRam0000000141dd33a0;
    uStack_bc = DAT_141dd33a4;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_c8);
  }
LAB_14047991b:
  if ((int)local_38[0] < 5) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[4];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((int)local_38[0] < 1) {
      puVar2 = &DAT_1419df7b0;
LAB_140479987:
      local_c8 = *(undefined4 *)puVar2;
      uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_c0 = *(undefined4 *)(puVar2 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_c8);
    }
    else {
      puVar2 = (undefined8 *)*local_30;
      if (puVar2 != &local_118) goto LAB_140479987;
    }
    local_a0 = &local_118;
    in_stack_fffffffffffffea0 = &local_a0;
    uVar3 = CONCAT44(uVar9,DAT_141a090f8);
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_148,1,uVar3,in_stack_fffffffffffffea0);
    uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_150 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_158,puVar2);
    }
    uStack_bc = 7;
    local_c8 = 2;
    FUN_1400462a0(&local_158,&local_c8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((int)local_38[0] < 5) {
      puVar2 = &DAT_1419df7b0;
LAB_140479a79:
      local_138 = (undefined4)local_158;
      uStack_134 = local_158._4_4_;
      uStack_130 = uStack_150;
      uStack_12c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_138);
    }
    else {
      puVar2 = (undefined8 *)local_30[4];
      if (&local_158 != puVar2) goto LAB_140479a79;
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if (DAT_141ddc198 == '\0') {
    FUN_140e64380(DAT_141ddf0d8,
                  "gml_Script__func_delete_and_insert_buffer@anon@8609@scribble_markdown_format@scribble_markdown_format"
                 );
    FUN_140e64380(param_1,
                  "gml_Script__func_delete_and_insert_buffer@anon@8609@scribble_markdown_format@scribble_markdown_format"
                 );
  }
  local_a8 = 0x98;
  if (DAT_141ddc198 == '\0') {
    DAT_141ddc198 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf0d8 + 0x10))(DAT_141ddf0d8,DAT_1419f9278);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_138 = (undefined4)DAT_1419df7b0;
    uStack_134 = DAT_1419df7b0._4_4_;
    uStack_130 = DAT_1419df7b8;
    uStack_12c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_a0 = &local_118;
    ppuVar7 = &local_a0;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_148,1,ppuVar7);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a09108,0x80000000,&local_48,uVar8,
                  (ulonglong)in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    FUN_140e609c0(DAT_141ddf0d8);
    if (&local_48 != puVar2) {
      local_138 = (undefined4)local_48;
      uStack_134 = local_48._4_4_;
      uStack_130 = uStack_40;
      uStack_12c = uStack_3c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_138);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x9a;
  if ((int)local_38[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[2];
  }
  if ((int)local_38[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[4];
  }
  uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_150 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  FUN_1400460e0(&local_158,puVar2);
  local_138 = (undefined4)local_158;
  uStack_134 = local_158._4_4_;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_138);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_a8 = 0x9b;
  if ((int)local_38[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[1];
  }
  uStack_14c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_150 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_158);
  }
  FUN_1400462a0(&local_158,&local_68);
  local_138 = (undefined4)local_158;
  uStack_134 = local_158._4_4_;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_138);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_a8 = 0x9d;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_38[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_140479df2:
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    puVar2 = (undefined8 *)local_30[3];
    if (puVar2 != &local_118) goto LAB_140479df2;
  }
  local_a0 = &local_118;
  uVar3 = CONCAT44(uVar9,DAT_141a090a8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_128) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
  }
  local_a8 = 0x9e;
  uStack_14c = local_11c;
  uStack_150 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_158 = local_128;
  }
  else {
    FUN_1400419b0(&local_158,&local_128);
  }
  FUN_1400460e0(&local_158,&local_78);
  local_138 = (undefined4)local_158;
  uStack_134 = local_158._4_4_;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_138);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_a8 = 0xa0;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf0d8 + 8))(DAT_141ddf0d8,DAT_1419f9278);
  if (puVar2 != &local_118) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_a0 = &local_118;
  local_138 = _DAT_141dc6650;
  uStack_134 = uRam0000000141dc6654;
  uStack_130 = uRam0000000141dc6658;
  uStack_12c = uRam0000000141dc665c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_98 = (undefined8 *)local_108;
  local_138 = _DAT_1419e5ef0;
  uStack_134 = uRam00000001419e5ef4;
  uStack_130 = uRam00000001419e5ef8;
  uStack_12c = uRam00000001419e5efc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  local_90 = (undefined8 *)local_f8;
  if ((int)local_38[0] < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_14047a062:
    local_138 = *(undefined4 *)puVar4;
    uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar4 = (undefined8 *)local_30[3];
    if (puVar4 != &local_e8) goto LAB_14047a062;
  }
  local_88 = &local_e8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f18);
  FUN_140e634e0(param_1,param_2,&local_148,4,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0xa1;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14047a10f:
    local_138 = *(undefined4 *)puVar4;
    uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_118) goto LAB_14047a10f;
  }
  local_a0 = &local_118;
  local_98 = &local_68;
  local_90 = &local_78;
  if (puVar2 != &local_e8) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_88 = &local_e8;
  local_80 = &local_128;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_148,5,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0xa2;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if (puVar2 != &local_118) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_a0 = &local_118;
  local_138 = _DAT_141dc6650;
  uStack_134 = uRam0000000141dc6654;
  uStack_130 = uRam0000000141dc6658;
  uStack_12c = uRam0000000141dc665c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_98 = (undefined8 *)local_108;
  local_90 = &local_58;
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14047a2a3:
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  else {
    puVar2 = (undefined8 *)*local_30;
    if (puVar2 != &local_e8) goto LAB_14047a2a3;
  }
  local_88 = &local_e8;
  if ((int)local_38[0] < 5) {
    puVar2 = &DAT_1419df7b0;
LAB_14047a2f2:
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_138);
  }
  else {
    puVar2 = (undefined8 *)local_30[4];
    if (puVar2 != &local_d8) goto LAB_14047a2f2;
  }
  local_80 = &local_d8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_148,5,uVar3,&local_a0);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_a8 = 0xa4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_30;
    if (puVar2 == &local_118) goto LAB_14047a3d2;
  }
  local_138 = *(undefined4 *)puVar2;
  uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_130 = *(undefined4 *)(puVar2 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_138);
LAB_14047a3d2:
  local_a0 = &local_118;
  local_138 = _DAT_1419e5ed0;
  uStack_134 = uRam00000001419e5ed4;
  uStack_130 = uRam00000001419e5ed8;
  uStack_12c = uRam00000001419e5edc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_98 = (undefined8 *)local_108;
  uStack_14c = local_11c;
  uStack_150 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_158 = local_128;
  }
  else {
    FUN_1400419b0(&local_158,&local_128);
  }
  uStack_bc = 7;
  local_c8 = 1;
  FUN_1400462a0(&local_158,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_138 = (undefined4)local_158;
  uStack_134 = local_158._4_4_;
  uStack_130 = uStack_150;
  uStack_12c = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_138);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_90 = (undefined8 *)local_f8;
  FUN_140e634e0(param_1,param_2,&local_148,3,CONCAT44(uVar9,DAT_141a05a38),&local_a0);
  local_a8 = 0xa6;
  if (2 < (int)local_38[0]) {
    puVar6 = (undefined8 *)local_30[2];
  }
  uStack_14c = local_11c;
  uStack_150 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_158 = local_128;
  }
  else {
    FUN_1400419b0(&local_158,&local_128);
  }
  FUN_1400462a0(&local_158,puVar6);
  if (&local_158 != param_3) {
    local_138 = (undefined4)local_158;
    uStack_134 = local_158._4_4_;
    uStack_130 = uStack_150;
    uStack_12c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar6 = local_30;
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
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


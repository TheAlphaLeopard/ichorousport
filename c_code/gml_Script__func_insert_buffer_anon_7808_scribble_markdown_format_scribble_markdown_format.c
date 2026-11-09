// gml_Script__func_insert_buffer_anon_7808_scribble_markdown_format_scribble_markdown_format @ 0x140477d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__func_insert_buffer_anon_7808_scribble_markdown_format_scribble_markdown_format
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 **ppuVar8;
  undefined8 **in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_a0 = 
  "gml_Script__func_delete_buffer@anon@7249@scribble_markdown_format@scribble_markdown_format";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x74;
  FUN_140041df0(local_38,param_4,4,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf0e0) &&
     (_Init_thread_header(&DAT_141ddf0e0), DAT_141ddf0e0 == -1)) {
    DAT_141ddf130 = (longlong *)FUN_140e63aa0(DAT_1419f9408);
    _Init_thread_footer(&DAT_141ddf0e0);
  }
  local_98 = 0x74;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 4) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[3];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_98 = 0x74;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_38[0] < 1) {
      puVar2 = &DAT_1419df7b0;
LAB_140477eec:
      local_b8 = *puVar2;
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_b8);
    }
    else {
      puVar2 = (undefined8 *)*local_30;
      if (puVar2 != &local_c8) goto LAB_140477eec;
    }
    local_50 = &local_c8;
    in_stack_fffffffffffffec0 = &local_50;
    uVar3 = CONCAT44(uVar9,DAT_141a090f8);
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_138,1,uVar3,in_stack_fffffffffffffec0);
    uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
    uStack_110 = *(undefined4 *)(puVar2 + 1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
      local_118 = *puVar2;
    }
    else {
      FUN_1400419b0(&local_118,puVar2);
    }
    uStack_ac = 7;
    local_b8 = CONCAT44(local_b8._4_4_,2);
    FUN_1400462a0(&local_118,&local_b8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((int)local_38[0] < 4) {
      puVar2 = &DAT_1419df7b0;
LAB_140477fda:
      local_128 = (undefined4)local_118;
      uStack_124 = local_118._4_4_;
      uStack_120 = uStack_110;
      uStack_11c = uStack_10c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_128);
    }
    else {
      puVar2 = (undefined8 *)local_30[3];
      if (&local_118 != puVar2) goto LAB_140477fda;
    }
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  if (DAT_141ddc19a == '\0') {
    FUN_140e64380(DAT_141ddf130,
                  "gml_Script__func_delete_buffer@anon@7249@scribble_markdown_format@scribble_markdown_format"
                 );
    FUN_140e64380(param_1,
                  "gml_Script__func_delete_buffer@anon@7249@scribble_markdown_format@scribble_markdown_format"
                 );
  }
  local_98 = 0x76;
  if (DAT_141ddc19a == '\0') {
    DAT_141ddc19a = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf130 + 0x10))(DAT_141ddf130,DAT_1419f9278);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_128 = (undefined4)DAT_1419df7b0;
    uStack_124 = DAT_1419df7b0._4_4_;
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
    local_70 = &local_108;
    ppuVar8 = &local_70;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_138,1,ppuVar8);
    uVar7 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a09108,0x80000000,&local_48,uVar7,
                  (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar7 >> 0x20);
    FUN_140e609c0(DAT_141ddf130);
    if (&local_48 != puVar2) {
      local_128 = (undefined4)local_48;
      uStack_124 = local_48._4_4_;
      uStack_120 = uStack_40;
      uStack_11c = uStack_3c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_128);
    }
    FUN_140e60910(1);
  }
  local_98 = 0x78;
  if ((int)local_38[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[2];
  }
  if ((int)local_38[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[3];
  }
  uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_110 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_118);
  }
  FUN_1400460e0(&local_118,puVar2);
  local_128 = (undefined4)local_118;
  uStack_124 = local_118._4_4_;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_128);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_98 = 0x79;
  if ((int)local_38[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[1];
  }
  uStack_10c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_110 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_118 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_118);
  }
  FUN_1400462a0(&local_118,&local_80);
  local_128 = (undefined4)local_118;
  uStack_124 = local_118._4_4_;
  uStack_120 = uStack_110;
  uStack_11c = uStack_10c;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_128);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_98 = 0x7b;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141ddf130 + 8))(DAT_141ddf130,DAT_1419f9278);
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140478362:
    local_128 = *(undefined4 *)puVar4;
    uStack_124 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_108) goto LAB_140478362;
  }
  local_70 = &local_108;
  local_68 = &local_80;
  local_60 = &local_90;
  if (puVar2 != &local_d8) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  local_58 = &local_d8;
  local_128 = _DAT_141dc6650;
  uStack_124 = uRam0000000141dc6654;
  uStack_120 = uRam0000000141dc6658;
  uStack_11c = uRam0000000141dc665c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_128);
  local_50 = &local_c8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_138,5,uVar3,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_98 = 0x7c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (puVar2 != &local_108) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_70 = &local_108;
  local_128 = _DAT_141dc6650;
  uStack_124 = uRam0000000141dc6654;
  uStack_120 = uRam0000000141dc6658;
  uStack_11c = uRam0000000141dc665c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_68 = (undefined8 *)local_f8;
  local_60 = &local_90;
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_14047852d:
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_128);
  }
  else {
    puVar2 = (undefined8 *)*local_30;
    if (puVar2 != &local_d8) goto LAB_14047852d;
  }
  local_58 = &local_d8;
  if ((int)local_38[0] < 4) {
    puVar2 = &DAT_1419df7b0;
LAB_14047857c:
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  else {
    puVar2 = (undefined8 *)local_30[3];
    if (puVar2 != &local_c8) goto LAB_14047857c;
  }
  local_50 = &local_c8;
  uVar3 = CONCAT44(uVar9,DAT_141a08f58);
  FUN_140e634e0(param_1,param_2,&local_138,5,uVar3,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_98 = 0x7e;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_30;
    if (puVar2 == &local_108) goto LAB_14047865c;
  }
  local_128 = *(undefined4 *)puVar2;
  uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_120 = *(undefined4 *)(puVar2 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_128);
LAB_14047865c:
  local_70 = &local_108;
  local_128 = _DAT_1419e5ed0;
  uStack_124 = uRam00000001419e5ed4;
  uStack_120 = uRam00000001419e5ed8;
  uStack_11c = uRam00000001419e5edc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_128);
  local_68 = (undefined8 *)local_f8;
  local_128 = _DAT_1419e5f00;
  uStack_124 = uRam00000001419e5f04;
  uStack_120 = uRam00000001419e5f08;
  uStack_11c = uRam00000001419e5f0c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_128);
  local_60 = (undefined8 *)local_e8;
  FUN_140e634e0(param_1,param_2,&local_138,3,CONCAT44(uVar9,DAT_141a05a38),&local_70);
  local_98 = 0x80;
  if (2 < (int)local_38[0]) {
    puVar5 = (ulonglong *)local_30[2];
  }
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar7 = *puVar5;
  }
  else {
    uVar7 = FUN_140e4b060(puVar5);
  }
  uStack_ac = 0;
  local_b8 = uVar7 ^ 0x8000000000000000;
  if (&local_b8 != param_3) {
    local_b8._4_4_ = (undefined4)(local_b8 >> 0x20);
    uStack_124 = local_b8._4_4_;
    uStack_120 = uStack_b0;
    uStack_11c = 0;
    local_128 = (int)uVar7;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar2 = local_30;
    do {
      puVar4 = (undefined8 *)*puVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar2 = puVar2 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


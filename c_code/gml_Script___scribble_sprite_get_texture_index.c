// gml_Script___scribble_sprite_get_texture_index @ 0x140203dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_sprite_get_texture_index
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  undefined4 uVar6;
  ulonglong in_stack_fffffffffffffea0;
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
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_100 = "gml_Script___scribble_sprite_get_material";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 6;
  _eh_vector_constructor_iterator_(&local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0;
  local_158 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddaa4) &&
     (_Init_thread_header(&DAT_141dddaa4), DAT_141dddaa4 == -1)) {
    DAT_141dddaa8 = (longlong *)FUN_140e63aa0(DAT_141a0a3f8);
    _Init_thread_footer(&DAT_141dddaa4);
  }
  if (DAT_141ddc0a1 == '\0') {
    FUN_140e64380(DAT_141dddaa8,"gml_Script___scribble_sprite_get_material");
    FUN_140e64380(param_1,"gml_Script___scribble_sprite_get_material");
  }
  local_f8 = 8;
  if (DAT_141ddc0a1 == '\0') {
    DAT_141ddc0a1 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dddaa8 + 0x10))(DAT_141dddaa8,DAT_141a0a3e8);
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
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_148);
    local_58 = &local_c8;
    ppuVar5 = &local_58;
    uVar3 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_158,1,ppuVar5);
    FUN_140e87440(uVar3,DAT_141a0a418,0x80000000,&local_78,(ulonglong)ppuVar5 & 0xffffffffffffff00,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dddaa8);
    if (&local_78 != puVar2) {
      local_148 = (undefined4)local_78;
      uStack_144 = local_78._4_4_;
      uStack_140 = uStack_70;
      uStack_13c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_148);
    }
    FUN_140e60910(1);
  }
  local_f8 = 10;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14020408a:
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_e8) goto LAB_14020408a;
  }
  local_68 = &local_e8;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 == &local_d8) goto LAB_140204103;
  }
  local_148 = *(undefined4 *)puVar4;
  uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_140 = *(undefined4 *)(puVar4 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_148);
LAB_140204103:
  local_60 = &local_d8;
  ppuVar5 = &local_68;
  puVar4 = (undefined8 *)
           gml_Script___scribble_surface_get_material(param_1,param_2,&local_158,2,ppuVar5);
  uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  if (puVar4 != &local_128) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  local_f8 = 0xb;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dddaa8 + 8))(DAT_141dddaa8,DAT_141a0a3e8);
  if (puVar4 != &local_e8) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
  }
  local_68 = &local_e8;
  local_60 = &local_128;
  uVar3 = CONCAT44(uVar6,DAT_1419ff4f8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar3,&local_68);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar4 != &local_138) {
    local_148 = *(undefined4 *)puVar4;
    uStack_144 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_148);
  }
  local_f8 = 0xc;
  iVar1 = FUN_140e851f0(&local_138,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_f8 = 0xe;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((param_4 < 1) || (puVar2 = (undefined8 *)*param_5, puVar2 != &local_e8)) {
      local_148 = *(undefined4 *)puVar2;
      uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_140 = *(undefined4 *)(puVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_68 = &local_e8;
    puVar2 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_118,1,CONCAT44(uVar6,DAT_141a089e8),&local_68);
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
    local_60 = &local_d8;
    local_58 = &local_128;
    local_148 = _DAT_141dc6290;
    uStack_144 = uRam0000000141dc6294;
    uStack_140 = uRam0000000141dc6298;
    uStack_13c = uRam0000000141dc629c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_148);
    local_50 = local_b8;
    local_148 = (undefined4)DAT_1419df7b0;
    uStack_144 = DAT_1419df7b0._4_4_;
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_148);
    local_48 = local_a8;
    local_148 = (undefined4)DAT_1419df7b0;
    uStack_144 = DAT_1419df7b0._4_4_;
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_148);
    local_40 = local_98;
    local_148 = (undefined4)DAT_1419df7b0;
    uStack_144 = DAT_1419df7b0._4_4_;
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_148);
    ppuVar5 = &local_60;
    local_38 = local_88;
    puVar2 = (undefined8 *)
             gml_Script____struct___60___scribble_glyph_data_initialize___scribble_glyph_data_initialize
                       (param_1,param_2,&local_158,6,ppuVar5);
    uVar6 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
    if (puVar2 != &local_138) {
      local_148 = *(undefined4 *)puVar2;
      uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_140 = *(undefined4 *)(puVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_148);
    }
    local_f8 = 0xf;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dddaa8 + 8))(DAT_141dddaa8,DAT_141a0a3e8);
    if (puVar2 != &local_e8) {
      local_148 = *(undefined4 *)puVar2;
      uStack_144 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_140 = *(undefined4 *)(puVar2 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_68 = &local_e8;
    local_60 = &local_128;
    local_58 = &local_138;
    FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar6,DAT_1419ff3d8),&local_68);
  }
  local_f8 = 0x12;
  if (&local_138 != param_3) {
    local_148 = (undefined4)local_138;
    uStack_144 = local_138._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}


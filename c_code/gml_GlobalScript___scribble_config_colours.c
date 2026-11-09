// gml_GlobalScript___scribble_config_colours @ 0x140176610

undefined8 *
gml_GlobalScript___scribble_config_colours
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_40 [3];
  
  local_c0 = "gml_Script___scribble_class_typist";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 4;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcfec) {
    _Init_thread_header(&DAT_141ddcfec);
    if (DAT_141ddcfec == -1) {
      DAT_141ddcff0 = (longlong *)FUN_140e63aa0(DAT_141a078e8);
      _Init_thread_footer(&DAT_141ddcfec);
    }
  }
  if (DAT_141ddc089 == '\0') {
    FUN_140e64380(DAT_141ddcff0,"gml_Script___scribble_class_typist");
    FUN_140e64380(param_1,"gml_Script___scribble_class_typist");
  }
  FUN_140e643a0(param_1,DAT_141ddcff0);
  local_b8 = 6;
  if (DAT_141ddc089 == '\0') {
    DAT_141ddc089 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a05af8);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    local_e8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_e8);
    local_40[0] = local_58;
    ppuVar5 = local_40;
    uVar2 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_b0,1,ppuVar5);
    uVar6 = (ulonglong)ppuVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a05158,0x80000000,&local_78,uVar6,
                  in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar6 >> 0x20);
    FUN_140e609c0(DAT_141ddcff0);
    if (&local_78 != puVar1) {
      local_e8 = local_78;
      uStack_e0 = uStack_70;
      uStack_dc = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07778);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,gml_Script_out_anon_2758___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07848);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_skip_anon_3152___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07688);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_skip_to_pause_anon_3384___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07b28);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_ignore_delay_anon_3616___scribble_class_typist___scribble_class_typist,
                  0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07ac8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_sound_anon_3872___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a077d8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_sound_per_char_anon_4554___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07c38);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_function_per_char_anon_5661___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07bf8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_function_on_complete_anon_5810___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07c28);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_execution_scope_anon_5957___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a079d8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_pause_anon_6082___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a077a8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_unpause_anon_6193___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07a18);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_ease_anon_6876___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07aa8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_character_delay_add_anon_7342___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07938);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_character_delay_remove_anon_7887___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07a78);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_character_delay_clear_anon_8401___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a078d8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_skip_anon_8622___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07be8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_ignore_delay_anon_8708___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07c48);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_state_anon_8795___scribble_class_typist___scribble_class_typist,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07ad8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_delay_paused_anon_10338___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07808);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_paused_anon_10426___scribble_class_typist___scribble_class_typist,0
                 );
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07a48);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_position_anon_10510___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07b98);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_text_element_anon_10662___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07908);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_execution_scope_anon_10807___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a076b8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_sync_to_sound_anon_10958___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a078f8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___sync_reset_anon_11629___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07b38);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_set_sound_tag_gain_anon_11898___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07748);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script_get_sound_tag_gain_anon_12024___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07958);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___associate_anon_12184___scribble_class_typist___scribble_class_typist,
                  0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07a68);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___process_event_stack_anon_13324___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a076f8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___play_sound_anon_18756___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07988);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___execute_function_per_character_anon_20548___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a079e8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___execute_function_on_complete_anon_21036___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a077b8);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,FUN_14016ebd0,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a07a28);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,FUN_14016f240,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a05978);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,FUN_14016f6f0,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddcff0 + 0x10))(DAT_141ddcff0,DAT_141a05f88);
    FUN_140e609c0(DAT_141ddcff0);
    FUN_140e645a0(&local_e8,
                  gml_Script___set_shader_uniforms_anon_31506___scribble_class_typist___scribble_class_typist
                  ,0);
    if (&local_e8 != puVar1) {
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_d8);
    }
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140e60910(1);
  }
  local_b8 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07698);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a00db8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a077f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07738);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b88);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0xf;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07708);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a98);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x13;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07758);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x15;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a08);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07968);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x18;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a076a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x19;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x1a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07798);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_b8 = 0x1b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07ae8);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_88);
  FUN_140e609c0(param_1);
  if (&local_88 != puVar1) {
    local_d8 = (undefined4)local_88;
    uStack_d4 = local_88._4_4_;
    uStack_d0 = uStack_80;
    uStack_cc = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x1d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a079c8);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x1e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b78);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x1f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07ab8);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x20;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b58);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x22;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c58);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x24;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07898);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x25;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07878);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x26;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a88);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x28;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a078b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 10;
  *puVar1 = 1;
  local_b8 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0x2a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07718);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0x2b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a079f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x2c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07bb8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07838);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_b8 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07bc8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_b8 = 0x30;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07868);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x31;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a076e8);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b0,0,CONCAT44(uVar7,DAT_1419fd6d8),0);
  if (puVar4 != puVar3) {
    local_d8 = *puVar4;
    uStack_d4 = puVar4[1];
    uStack_d0 = puVar4[2];
    uStack_cc = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x33;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07818);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_d8 = *(undefined4 *)param_5;
    uStack_d4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_d0 = *(undefined4 *)(param_5 + 1);
    uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x35;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07918);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x36;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b68);
  FUN_140e609c0(param_1);
  if (puVar1 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x37;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c68);
  uStack_dc = 0xd;
  local_e8 = 0;
  if (&local_e8 != puVar1) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_e0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  local_b8 = 0x38;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a078c8);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_98);
  FUN_140e609c0(param_1);
  if (&local_98 != puVar1) {
    local_d8 = (undefined4)local_98;
    uStack_d4 = local_98._4_4_;
    uStack_d0 = uStack_90;
    uStack_cc = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  local_b8 = 0x3a;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_b0 = 0;
  local_a8 = 0;
  local_a4 = 5;
  uVar2 = (**(code **)(*DAT_141ddcff0 + 8))(DAT_141ddcff0,DAT_141a07778);
  FUN_140e63610(param_1,param_2,&local_b0,0,uVar2,0);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


// gml_Script___submit_anon_1332___scribble_class_page___scribble_class_page @ 0x1401579a0

undefined8 *
gml_Script___submit_anon_1332___scribble_class_page___scribble_class_page
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script___scribble_class_null_element";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 2;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcf78) {
    _Init_thread_header(&DAT_141ddcf78);
    if (DAT_141ddcf78 == -1) {
      DAT_141ddcf70 = (longlong *)FUN_140e63aa0(DAT_141a059c8);
      _Init_thread_footer(&DAT_141ddcf78);
    }
  }
  if (DAT_141ddc083 == '\0') {
    FUN_140e64380(DAT_141ddcf70,"gml_Script___scribble_class_null_element");
    FUN_140e64380(param_1,"gml_Script___scribble_class_null_element");
  }
  FUN_140e643a0(param_1,DAT_141ddcf70);
  local_18 = 4;
  if (DAT_141ddc083 == '\0') {
    DAT_141ddc083 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06c98);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_starting_format_anon_567___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05028);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_align_anon_638___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05db8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_blend_anon_709___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a055b8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_gradient_anon_783___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05688);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_fog_anon_852___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a058a8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_flash_anon_923___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a058b8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_origin_anon_1055___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05d08);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_transform_anon_1130___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a060a8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_skew_anon_1200___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05fd8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_scale_to_box_anon_1278___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a055e8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_wrap_anon_1348___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06048);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_fit_to_box_anon_1424___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05c08);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_pin_guide_width_anon_1505___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06088);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_line_height_anon_1582___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04ed8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_line_spacing_anon_1660___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a054c8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_padding_anon_1733___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04d08);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_bezier_anon_1805___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05cb8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_right_to_left_anon_1884___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05e68);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_region_detect_anon_2024___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05f78);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_region_set_active_anon_2087___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a059f8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,&LAB_1401546e0,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a056b8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,&LAB_140154710,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05d38);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_region_get_active_anon_2150___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05ff8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_top_anon_2447___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05458);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_right_anon_2522___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05678);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_bottom_anon_2598___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05888);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_width_anon_2673___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a050e8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_height_anon_2749___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04df8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_bbox_anon_2823___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05018);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_bbox_revealed_anon_2906___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05fc8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_page_anon_3035___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a053f8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_page_anon_3109___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05d18);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_pages_anon_3184___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05f48);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_page_count_anon_3264___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05ae8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_on_last_page_anon_3342___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a059d8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_wrapped_anon_3486___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05fe8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_text_anon_3560___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05198);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_glyph_data_anon_3640___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05dc8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_glyph_count_anon_3721___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04d38);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_line_count_anon_3801___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05118);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_reveal_anon_3937___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a056e8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_reveal_anon_4013___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05a18);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_tick_speed_anon_4162___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05b98);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_speed_anon_4243___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05488);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_animation_speed_anon_4328___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05e08);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_is_animated_anon_4405___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04f28);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_sync_anon_4485___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05fa8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_wave_anon_4565___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05998);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_shake_anon_4646___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05828);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_rainbow_anon_4729___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05d68);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_wobble_anon_4811___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05318);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_pulse_anon_4892___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05708);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_wheel_anon_4973___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05248);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_cycle_anon_5054___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05d88);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_jitter_anon_5136___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05a48);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_animation_blink_anon_5217___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05738);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_sdf_shadow_anon_5350___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04e88);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_sdf_outline_anon_5427___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04f88);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_sdf_feather_anon_5504___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a052b8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_build_anon_5669___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06d38);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_flush_anon_5740___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05098);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_events_anon_5883___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a04e78);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_template_anon_6039___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05258);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_ignore_command_tags_anon_6146___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05bd8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_z_anon_6213___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a059e8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_z_anon_6284___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05ca8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_overwrite_anon_6409___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05e48);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_debug_draw_bbox_anon_6490___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a054f8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_off_anon_6641___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a05c48);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_reset_anon_6723___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06cf8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_in_anon_6802___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06cc8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_out_anon_6882___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06c28);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_skip_anon_6963___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06ca8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_sound_anon_7045___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06c48);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_sound_per_char_anon_7136___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06c78);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_function_anon_7221___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06bc8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_pause_anon_7303___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06d28);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_unpause_anon_7387___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06bd8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_typewriter_ease_anon_7468___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06d18);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_typewriter_state_anon_7554___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06be8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_typewriter_paused_anon_7641___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06bb8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,
                  gml_Script_get_typewriter_pos_anon_7725___scribble_class_null_element___scribble_class_null_element
                  ,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06c08);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,gml_Script___scribble_class_null_element,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddcf70 + 0x10))(DAT_141ddcf70,DAT_141a06bf8);
    FUN_140e609c0(DAT_141ddcf70);
    FUN_140e645a0(&local_48,gml_GlobalScript___scribble_class_page,0);
    if (&local_48 != puVar1) {
      local_38 = local_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_38);
    }
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
    FUN_140e60910(1);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


// gml_Script_scribble_font_bake_outline_4dir @ 0x1404603d0

undefined8 *
gml_Script_scribble_font_bake_outline_4dir(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 *local_res18 [2];
  undefined1 **ppuVar5;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_90 = "gml_Script_scribble_flush_shader_uniforms";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_a8,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf018) &&
     (_Init_thread_header(&DAT_141ddf018), DAT_141ddf018 == -1)) {
    DAT_141ddf020 = (longlong *)FUN_140e63aa0(DAT_1419f79e8);
    _Init_thread_footer(&DAT_141ddf018);
  }
  if (DAT_141ddc18d == '\0') {
    FUN_140e64380(DAT_141ddf020,"gml_Script_scribble_flush_shader_uniforms");
    FUN_140e64380(local_res8,"gml_Script_scribble_flush_shader_uniforms");
  }
  local_88 = 9;
  if (DAT_141ddc18d == '\0') {
    DAT_141ddc18d = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddf020 + 0x10))(DAT_141ddf020,DAT_141a04cd8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    local_c8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_c0 = DAT_1419df7b8;
    uStack_bc = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_c8);
    local_res18[0] = local_a8;
    ppuVar5 = local_res18;
    uVar4 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_d8,1,ppuVar5);
    FUN_140e87440(uVar4,DAT_141a05158,0x80000000,&local_b8,(ulonglong)ppuVar5 & 0xffffffffffffff00,0
                 );
    FUN_140e609c0(DAT_141ddf020);
    if (&local_b8 != puVar3) {
      local_c8 = local_b8;
      uStack_c0 = uStack_b0;
      uStack_bc = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_88 = 10;
  uVar4 = (**(code **)(*DAT_141ddf020 + 8))(DAT_141ddf020,DAT_141a04cd8);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_88 = 0xc;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05818);
      uStack_6c = 0xd;
      local_78 = 0x3ff0000000000000;
      if (&local_78 != puVar3) {
        local_68 = 0;
        uStack_64 = 0x3ff00000;
        uStack_60 = uStack_70;
        uStack_5c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_68);
      }
      local_88 = 0xd;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a059b8);
      uStack_bc = 0xd;
      local_c8 = 0x3ff0000000000000;
      if (&local_c8 != puVar3) {
        local_68 = 0;
        uStack_64 = 0x3ff00000;
        uStack_60 = uStack_c0;
        uStack_5c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_68);
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


// gml_Script___update_scale_to_box_scale_anon_63750___scribble_class_element___scribble_class_element @ 0x140136930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___update_scale_to_box_scale_anon_63750___scribble_class_element___scribble_class_element
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  
  local_50 = 
  "gml_Script__shader_uniforms_disabled@anon@57807@__set_standard_uniforms@anon@55077@__scribble_class_element@__scribble_class_element"
  ;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x6d0;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_40,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = (undefined8 *)0x0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x6d2;
  local_68 = _DAT_1419e1dd0;
  uStack_64 = uRam00000001419e1dd4;
  uStack_60 = uRam00000001419e1dd8;
  uStack_5c = uRam00000001419e1ddc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_68);
  local_78 = local_40;
  local_68 = _DAT_141dc61a0;
  uStack_64 = uRam0000000141dc61a4;
  uStack_60 = uRam0000000141dc61a8;
  uStack_5c = uRam0000000141dc61ac;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_68);
  local_70 = local_30;
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,2,CONCAT44(uVar2,DAT_1419fd218),&local_78);
  if (puVar1 != &local_98) {
    local_68 = *(undefined4 *)puVar1;
    uStack_64 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_60 = *(undefined4 *)(puVar1 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_68);
  }
  local_48 = 0x6d3;
  puVar1 = (undefined8 *)FUN_140e48e40(&local_98,0x11);
  FUN_140e609c0(*local_98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  FUN_140e60910(1);
  local_48 = 0x6d4;
  puVar1 = (undefined8 *)FUN_140e48e40(&local_98,0x12);
  FUN_140e609c0(*local_98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  FUN_140e60910(1);
  local_48 = 0x6d5;
  puVar1 = (undefined8 *)FUN_140e48e40(&local_98,0x10);
  FUN_140e609c0(*local_98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x406fe00000000000;
  FUN_140e60910(1);
  local_48 = 0x6d6;
  if (&local_98 != param_3) {
    local_68 = (undefined4)local_98;
    uStack_64 = local_98._4_4_;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_40,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


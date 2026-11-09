// gml_Script_anon_16129_gml_Object_oPlayer_Other_10 @ 0x140c79ae0

undefined8 *
gml_Script_anon_16129_gml_Object_oPlayer_Other_10
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [32];
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_38;
  undefined8 *local_30;
  
  ppuVar6 = &local_38;
  local_a0 = "gml_Script_anon@16872@anon@16129@gml_Object_oPlayer_Other_10";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x2c7;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x2c8;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 2) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a0aa28,0x80000000,&local_d8,
                  (ulonglong)pcVar5 & 0xffffffffffffff00,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    puVar3 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87440(*(undefined8 *)(param_5 + 8),DAT_141a0aa28,0x80000000,&local_d8,
                  (ulonglong)pcVar5 & 0xffffffffffffff00,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    puVar3 = *(undefined8 **)(param_5 + 8);
  }
  uVar2 = FUN_140069500(puVar3);
  puVar3 = (undefined8 *)FUN_140e63610(uVar2,param_2,&local_c8,0,&local_d8,0);
  if (puVar3 != &local_68) {
    local_108 = *puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_108);
  }
  local_38 = &local_68;
  uVar2 = gml_Script_imgui_arrow_button(param_1,param_2,&local_b8,1,ppuVar6);
  uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_98 = 0x2c9;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((param_4 < 2) || (puVar4 = *(undefined8 **)(param_5 + 8), puVar4 != &local_58)) {
      local_108 = *puVar4;
      uStack_100 = *(undefined4 *)(puVar4 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_108);
    }
    local_30 = &local_58;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar7,DAT_1419fd0c8),&local_30);
    if (puVar4 != &local_e8) {
      local_108 = *puVar4;
      uStack_100 = *(undefined4 *)(puVar4 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_108);
    }
    uStack_fc = 0xf;
    local_108 = 0x100000000000106;
    FUN_140e87930(&local_108,DAT_141a0a958,0x80000000,&local_e8);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


// gml_Script_scribble_font_set_style_family @ 0x140470b60

undefined8 *
gml_Script_scribble_font_set_style_family
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined1 local_80 [32];
  undefined8 local_60;
  byte local_54;
  undefined8 *local_40;
  
  local_c0 = "gml_Script_scribble_font_set_remap";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x17;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x19;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 == &local_60) goto LAB_140470c4d;
  }
  local_b0 = *(undefined4 *)puVar4;
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_a8 = *(undefined4 *)(puVar4 + 1);
  uStack_a4 = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_b0);
LAB_140470c4d:
  local_40 = &local_60;
  uVar3 = FUN_1401effd0(local_res8,local_res10,&local_d8,1,&local_40);
  iVar2 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_b8 = 0x1b;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a061b8);
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
      }
      iVar2 = FUN_140e851f0(uVar3,puVar4,DAT_141955260,0);
      if (iVar2 != 0) {
        local_b8 = 0x1d;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a061b8);
        FUN_140e609c0(local_res8);
        if (param_4 < 2) {
          puVar5 = &DAT_1419df7b0;
        }
        else {
          puVar5 = (undefined8 *)param_5[1];
        }
        if (puVar5 != puVar4) {
          local_b0 = *(undefined4 *)puVar5;
          uStack_ac = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_a8 = *(undefined4 *)(puVar5 + 1);
          uStack_a4 = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_b0);
        }
        FUN_140e60910(1);
        local_b8 = 0x1e;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        gml_GlobalScript_scribble_flush_shader_uniforms(local_res8,local_res10,&local_d8,0,0);
      }
      cVar1 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_a0,&local_res8,&local_res10);
  if (local_90 != 0) {
    FUN_140e4cd60();
    local_90 = 0;
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


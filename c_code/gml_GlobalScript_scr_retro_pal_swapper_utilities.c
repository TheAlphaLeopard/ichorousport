// gml_GlobalScript_scr_retro_pal_swapper_utilities @ 0x140445900

undefined8 *
gml_GlobalScript_scr_retro_pal_swapper_utilities
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_40;
  
  local_90 = "gml_Script_floor_n";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 10;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xb;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)*param_5;
    }
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    puVar2 = (undefined8 *)*param_5;
  }
  uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_c8);
  }
  FUN_140046500(&local_c8,puVar1);
  local_a8 = (undefined4)local_c8;
  uStack_a4 = local_c8._4_4_;
  uStack_a0 = uStack_c0;
  uStack_9c = uStack_bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_a8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_40 = local_60;
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  puVar1 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar4,DAT_1419fe728),&local_40);
  uStack_bc = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_c0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
    local_c8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_c8,puVar1);
  }
  FUN_140042560(&local_c8,puVar3);
  if (&local_c8 != param_3) {
    local_a8 = (undefined4)local_c8;
    uStack_a4 = local_c8._4_4_;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


// gml_GlobalScript_find_target @ 0x1402812e0

undefined8 *
gml_GlobalScript_find_target
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  byte local_34;
  
  local_60 = "gml_Script_frac@draw_wispy_line_connected@draw_wispy_line";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x25;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x25;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == &local_40) goto LAB_1402813ce;
  }
  local_a8 = *puVar1;
  uStack_a0 = *(undefined4 *)(puVar1 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  FUN_140041b80(&local_40,&local_a8);
LAB_1402813ce:
  local_80 = &local_40;
  if (0 < param_4) {
    puVar3 = (undefined8 *)*param_5;
  }
  uVar2 = FUN_140e634e0(param_1,param_2,&local_98,1,DAT_1419fe728,&local_80);
  uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_a8,puVar3);
  }
  FUN_1400462a0(&local_a8,uVar2);
  if (&local_a8 != param_3) {
    local_78 = (undefined4)local_a8;
    uStack_74 = local_a8._4_4_;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


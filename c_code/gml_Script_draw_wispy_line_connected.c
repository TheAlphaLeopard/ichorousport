// gml_Script_draw_wispy_line_connected @ 0x140280d90

undefined8 *
gml_Script_draw_wispy_line_connected
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [32];
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_40;
  
  local_90 = "gml_Script__phase_for@draw_wispy_line_connected@draw_wispy_line";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x20;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x21;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
  }
  local_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_b8);
  }
  uStack_fc = 0;
  local_108 = 0x40737b3333333333;
  FUN_140042560(&local_b8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (0 < param_4) {
    puVar3 = (undefined8 *)*param_5;
  }
  local_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  uStack_fc = 0;
  local_108 = 0x405fc66666666666;
  FUN_140042560(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_dc = local_ec;
  uStack_e0 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_e8 = local_f8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_f8);
  }
  FUN_1400460e0(&local_e8,&local_b8);
  uStack_bc = uStack_dc;
  uStack_c0 = uStack_e0;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
    local_c8 = local_e8;
  }
  else {
    FUN_1400419b0(&local_c8,&local_e8);
  }
  uStack_fc = 0;
  local_108 = 0x4029fac710cb295f;
  FUN_140042560(&local_c8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_108);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_40 = local_60;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar4,DAT_141a579a0),&local_40);
  uVar5 = 0;
  uVar4 = 0xffffff;
  if (puVar3 != &local_d8) {
    local_108 = *puVar3;
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_d8,&local_108);
    uVar5 = local_d8;
    uVar4 = local_cc;
  }
  local_88 = 0x22;
  local_f0 = local_d0;
  bVar1 = (byte)uVar4 & 0x1f;
  local_ec = uVar4;
  if ((1 << bVar1 & 0x46U) == 0) {
    local_f8 = uVar5;
  }
  else {
    FUN_1400419b0(&local_f8,&local_d8);
  }
  uStack_fc = 7;
  local_108 = CONCAT44(local_108._4_4_,2);
  FUN_140042560(&local_f8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_dc = local_ec;
  uStack_e0 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_e8 = local_f8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_f8);
  }
  uStack_fc = 0;
  local_108 = 0x400921fb54442d18;
  FUN_140042560(&local_e8,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (&local_e8 != param_3) {
    local_108 = local_e8;
    uStack_100 = uStack_e0;
    uStack_fc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << bVar1 & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


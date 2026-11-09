// gml_Script__grad_anon_2291_perlin_noise_PerlinFunc @ 0x140433cd0

undefined8 *
gml_Script__grad_anon_2291_perlin_noise_PerlinFunc
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script__fade@anon@2110@perlin_noise@PerlinFunc";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x24;
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_80 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_88);
  }
  uStack_bc = 7;
  local_c8 = 6;
  FUN_140042560(&local_88,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_4c = local_7c;
  local_50 = local_80;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_58 = local_88;
  }
  else {
    FUN_1400419b0(&local_58,&local_88);
  }
  uStack_bc = 7;
  local_c8 = 0xf;
  FUN_1400462a0(&local_58,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_90 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  FUN_140042560(&local_98,&local_58);
  local_5c = local_8c;
  local_60 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_68 = local_98;
  }
  else {
    FUN_1400419b0(&local_68,&local_98);
  }
  uStack_bc = 7;
  local_c8 = 10;
  FUN_1400460e0(&local_68,&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_a8);
  }
  FUN_140042560(&local_a8,puVar2);
  if (0 < param_4) {
    puVar1 = (undefined8 *)*param_5;
  }
  local_ac = local_9c;
  local_b0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_b8,&local_a8);
  }
  FUN_140042560(&local_b8,puVar1);
  uStack_6c = local_ac;
  uStack_70 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_78 = local_b8;
  }
  else {
    FUN_1400419b0(&local_78,&local_b8);
  }
  FUN_140042560(&local_78,&local_68);
  if (&local_78 != param_3) {
    local_c8 = (undefined4)local_78;
    uStack_c4 = local_78._4_4_;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


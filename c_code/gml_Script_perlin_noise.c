// gml_Script_perlin_noise @ 0x1404340d0

undefined8 *
gml_Script_perlin_noise
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script__lerp@anon@2209@perlin_noise@PerlinFunc";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x28;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (2 < param_4) {
      puVar1 = (undefined8 *)param_5[2];
      goto LAB_140434151;
    }
  }
  puVar1 = &DAT_1419df7b0;
LAB_140434151:
  local_5c = *(undefined4 *)((longlong)puVar1 + 0xc);
  local_60 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_68);
  }
  FUN_1400462a0(&local_68,puVar2);
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_70 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_78);
  }
  FUN_140042560(&local_78,&local_68);
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_80 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_88,puVar3);
  }
  FUN_1400460e0(&local_88,&local_78);
  if (&local_88 != param_3) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Script_anon_4210____struct___464_gml_Object_oEnemyDarner_Create_0 @ 0x1409998e0

undefined8 *
gml_Script_anon_4210____struct___464_gml_Object_oEnemyDarner_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  longlong *local_178;
  undefined8 uStack_170;
  undefined1 *local_168;
  ulonglong local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  byte local_6c;
  undefined1 local_58 [12];
  byte local_4c;
  
  local_c0 = "gml_Script_anon@3068@gml_Object_oEnemyDarner_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x85;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_11c = 0xffffff;
  local_128 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x87;
  uStack_17c = 6;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  local_188 = param_2;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_88,uVar9,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_178 = local_88;
  uStack_170 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_178);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d8);
  local_b8 = 0x88;
  uStack_17c = 6;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_188 = param_2;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_98,uVar9,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_178 = local_98;
  uStack_170 = (undefined8 *)CONCAT44(uStack_8c,uStack_90);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_178);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_e8);
  local_b8 = 0x8a;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 8))(param_2,DAT_141a1f230);
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar2;
  }
  else {
    uVar6 = FUN_140e4b060(puVar2);
  }
  uVar7 = FUN_140e79500(uVar6);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_b8 = 0x8b;
  local_158 = uVar7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09668);
  if ((local_14c & 0xffffff) == 0) {
    uVar7 = local_158;
  }
  else {
    uVar7 = FUN_140e4b060(&local_158);
  }
  uStack_170 = (undefined8 *)((ulonglong)uStack_170 & 0xffffffff);
  local_178 = (longlong *)(uVar7 ^ 0x8000000000000000);
  uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_180 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_188,puVar3);
  }
  FUN_140042560(&local_188,&local_178);
  local_138 = (undefined4)local_188;
  uStack_134 = local_188._4_4_;
  uStack_130 = uStack_180;
  uStack_12c = uStack_17c;
  FUN_140041b80(&local_f8,&local_138);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)((ulonglong)uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_b8 = 0x8c;
  uVar4 = (**(code **)(*param_2 + 8))(param_2,DAT_141a1f290);
  uStack_17c = *(uint *)((longlong)puVar2 + 0xc);
  uStack_180 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_188,puVar2);
  }
  FUN_140046500(&local_188,uVar4);
  if ((uStack_17c & 0xffffff) == 0) {
    uVar6 = SUB84(local_188,0);
  }
  else {
    uVar6 = FUN_140e4b060(&local_188);
  }
  uVar6 = FUN_140e78d00(uVar6);
  uVar4 = FUN_140e78ec0(uVar6,0,0x3ff0000000000000);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = uVar4;
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_b8 = 0x8d;
  uStack_17c = local_ec;
  uStack_180 = local_f0;
  bVar5 = (byte)local_ec & 0x1f;
  if ((1 << bVar5 & 0x46U) == 0) {
    local_188 = local_f8;
  }
  else {
    FUN_1400419b0(&local_188,&local_f8);
  }
  FUN_140042560(&local_188,&local_118);
  local_138 = (undefined4)local_188;
  uStack_134 = local_188._4_4_;
  uStack_130 = uStack_180;
  uStack_12c = uStack_17c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_138);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_b8 = 0x8f;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09fa8);
  uStack_170._4_4_ = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a778,0x80000000,&local_a8,uVar9 & 0xffffffffffffff00,0);
  if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_138 = (undefined4)local_a8;
  uStack_134 = local_a8._4_4_;
  uStack_130 = uStack_a0;
  uStack_12c = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_138);
  local_178 = &local_78;
  uStack_170 = &local_108;
  uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_180 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_188,puVar2);
  }
  FUN_140042560(&local_188,uVar1);
  local_138 = (undefined4)local_188;
  uStack_134 = local_188._4_4_;
  uStack_130 = uStack_180;
  uStack_12c = uStack_17c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_138);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_168 = local_58;
  puVar2 = (undefined8 *)gml_Script_animation_end(param_1,param_2,&local_148,3,&local_178);
  if (puVar2 != &local_128) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_138);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_128);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << bVar5 & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

